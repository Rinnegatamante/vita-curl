#include "vita.h"

#define MAX_NAME 512
struct hostent *gethostbyname(const char *name)
{
    static struct hostent ent;
    static char sname[MAX_NAME] = "";
    static struct SceNetInAddr saddr = { 0 };
    static char *addrlist[2] = { (char *) &saddr, NULL };

    int rid;
    int err;
    rid = sceNetResolverCreate("resolver", NULL, 0);
    if(rid < 0) {
        return NULL;
    }

    err = sceNetResolverStartNtoa(rid, name, &saddr, 0, 0, 0);
    sceNetResolverDestroy(rid);
    if(err < 0) {
        return NULL;
    }

    ent.h_name = sname;
    ent.h_aliases = 0;
    ent.h_addrtype = SCE_NET_AF_INET;
    ent.h_length = sizeof(struct SceNetInAddr);
    ent.h_addr_list = addrlist;
    ent.h_addr = addrlist[0];

    return &ent;
}

#define LOG 0
#if !LOG
#define sceClibPrintf(...) 
#endif
#undef LOG

#define MAX_EVENTS 256
int select(int nfds, fd_set *readfds, fd_set *writefds, fd_set *exceptfds, struct timeval *timeout) {
	if (nfds == 0) {
		sceKernelDelayThread(timeout->tv_sec * 1000000 + timeout->tv_usec);
		return 0;
	} else {
		int i;
		int epoll = sceNetEpollCreate("", 0);
		int ret = 0;
		for (i = 0; i < nfds; ++i) {
			SceNetEpollEvent ev = {0};
			if (readfds && FD_ISSET(i, readfds))
				ev.events |= SCE_NET_EPOLLIN;
			else if (writefds && FD_ISSET(i, writefds))
				ev.events |= SCE_NET_EPOLLOUT;
			else if (exceptfds && FD_ISSET(i, exceptfds))
				ev.events |= SCE_NET_EPOLLERR;
			if (ev.events) {
				ev.data.fd = i;
				ret = sceNetEpollControl(epoll, SCE_NET_EPOLL_CTL_ADD, i, &ev);
			}
		}
		SceNetEpollEvent events[MAX_EVENTS] = {0};
		ret = sceNetEpollWait(epoll, events, MAX_EVENTS, timeout->tv_sec * 1000000 + timeout->tv_usec);
		sceNetEpollDestroy(epoll);

		if (readfds)
			FD_ZERO(readfds);
		if (writefds)
			FD_ZERO(writefds);
		if (exceptfds)
			FD_ZERO(exceptfds);
		int cnt = 0;
		for (i = 0; i < ret; ++i) {
			if (events[i].events & SCE_NET_EPOLLIN && readfds) {
				FD_SET(events[i].data.fd, readfds);
				++cnt;
			}
			if (events[i].events & SCE_NET_EPOLLOUT && writefds) {
				FD_SET(events[i].data.fd, writefds);
				++cnt;
			}
			if (events[i].events & SCE_NET_EPOLLERR && exceptfds) {
				FD_SET(events[i].data.fd, exceptfds);
				++cnt;
			}
		}
		return cnt;
	}
}
