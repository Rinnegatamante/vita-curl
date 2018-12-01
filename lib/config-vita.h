#ifndef HEADER_CURL_CONFIG_VITA_H
#define HEADER_CURL_CONFIG_VITA_H
/***************************************************************************
 *                                  _   _ ____  _
 *  Project                     ___| | | |  _ \| |
 *                             / __| | | | |_) | |
 *                            | (__| |_| |  _ <| |___
 *                             \___|\___/|_| \_\_____|
 *
 * Copyright (C) 1998 - 2015, Daniel Stenberg, <daniel@haxx.se>, et al.
 *
 * This software is licensed as described in the file COPYING, which
 * you should have received as part of this distribution. The terms
 * are also available at https://curl.haxx.se/docs/copyright.html.
 *
 * You may opt to use, copy, modify, merge, publish, distribute and/or sell
 * copies of the Software, and permit persons to whom the Software is
 * furnished to do so, under the terms of the COPYING file.
 *
 * This software is distributed on an "AS IS" basis, WITHOUT WARRANTY OF ANY
 * KIND, either express or implied.
 *
 ***************************************************************************/


/* ================================================================ */
/*       lib/config-vita.h - Hand crafted config file for VITA      */
/* ================================================================ */
#define USE_MANUAL 1

#define OS "arm-vita-eabi"

#define PACKAGE  "curl"
#define PACKAGE_BUGREPORT "a suitable curl mailing list: https://curl.haxx.se/mail/"
#define PACKAGE_NAME "curl"
#define PACKAGE_STRING "curl -"
#define PACKAGE_TARNAME "curl"
#define PACKAGE_URL ""
#define PACKAGE_VERSION "-"

#define VERSION "-"
/* #undef CURL_CA_BUNDLE */
/* #undef CURL_CA_FALLBACK */
/* #undef CURL_CA_PATH */
/* #undef CURL_DISABLE_COOKIES */
/* #undef CURL_DISABLE_CRYPTO_AUTH */
#define CURL_DISABLE_DICT 1
#define CURL_DISABLE_FILE 1
#define CURL_DISABLE_FTP 1
#define CURL_DISABLE_GOPHER 1
/* #undef CURL_DISABLE_HTTP */
#define CURL_DISABLE_IMAP 1
#define CURL_DISABLE_LDAP 1
#define CURL_DISABLE_LDAPS 1
#define CURL_DISABLE_POP3 1
/* #undef CURL_DISABLE_PROXY */
#define CURL_DISABLE_RTSP 1
#define CURL_DISABLE_SMB 1
#define CURL_DISABLE_SMTP 1
#define CURL_DISABLE_TELNET 1
#define CURL_DISABLE_TFTP 1
/* #undef CURL_DISABLE_TLS_SRP */
/* #undef CURL_DISABLE_VERBOSE_STRINGS */
#define CURL_EXTERN_SYMBOL __attribute__ ((__visibility__ ("default")))
/* #undef EGD_SOCKET */
/* #undef ENABLE_IPV6 */
/* #undef GETHOSTNAME_TYPE_ARG2 */
/* #undef GETNAMEINFO_QUAL_ARG1 */
/* #undef GETNAMEINFO_TYPE_ARG1 */
/* #undef GETNAMEINFO_TYPE_ARG2 */
/* #undef GETNAMEINFO_TYPE_ARG46 */
/* #undef GETNAMEINFO_TYPE_ARG7 */
/* #undef GETSERVBYPORT_R_ARGS */
/* #undef GETSERVBYPORT_R_BUFSIZE */

/* #undef HAVE_ALARM */
#define HAVE_ALLOCA_H 1
/* #undef HAVE_ARPA_INET_H */
/* #undef HAVE_ARPA_TFTP_H */
#define HAVE_ASSERT_H 1
/* #undef HAVE_BASENAME */
#define HAVE_BOOL_T 1
/* #undef HAVE_CLOCK_GETTIME_MONOTONIC */
/* #undef HAVE_CLOSESOCKET */
/* #undef HAVE_CLOSESOCKET_CAMEL */
/* #undef HAVE_CONNECT */
#define HAVE_CRYPTO_CLEANUP_ALL_EX_DATA 1
/* #undef HAVE_CRYPTO_H */
/* #undef HAVE_CYASSL_CTX_USESUPPORTEDCURVE */
/* #undef HAVE_CYASSL_ERROR_SSL_H */
/* #undef HAVE_CYASSL_GET_PEER_CERTIFICATE */
/* #undef HAVE_CYASSL_OPTIONS_H */
/* #undef HAVE_DLFCN_H */
#define HAVE_ENGINE_CLEANUP 1
#define HAVE_ENGINE_LOAD_BUILTIN_ENGINES 1
#define HAVE_ERRNO_H 1
/* #undef HAVE_ERR_H */
#define HAVE_FCNTL 1
#define HAVE_FCNTL_H 1
/* #undef HAVE_FCNTL_O_NONBLOCK */
#define HAVE_FDOPEN 1
#define HAVE_FORK 1
/* #undef HAVE_FREEADDRINFO */
/* #undef HAVE_FREEIFADDRS */
/* #undef HAVE_FSETXATTR */
/* #undef HAVE_FSETXATTR_5 */
/* #undef HAVE_FSETXATTR_6 */
/* #undef HAVE_FTRUNCATE */
/* #undef HAVE_GAI_STRERROR */
/* #undef HAVE_GETADDRINFO */
/* #undef HAVE_GETADDRINFO_THREADSAFE */
/* #undef HAVE_GETEUID */
/* #undef HAVE_GETHOSTBYADDR */
/* #undef HAVE_GETHOSTBYADDR_R */
/* #undef HAVE_GETHOSTBYADDR_R_7 */
/* #undef HAVE_GETHOSTBYADDR_R_8 */
#define HAVE_GETHOSTBYNAME 1
/* #undef HAVE_GETHOSTBYNAME_R */
/* #undef HAVE_GETHOSTBYNAME_R_3 */
/* #undef HAVE_GETHOSTBYNAME_R_5 */
/* #undef HAVE_GETHOSTBYNAME_R_6 */
/* #undef HAVE_GETHOSTNAME */
/* #undef HAVE_GETIFADDRS */
/* #undef HAVE_GETNAMEINFO */
/* #undef HAVE_GETPASS_R */
/* #undef HAVE_GETPPID */
/* #undef HAVE_GETPROTOBYNAME */
/* #undef HAVE_GETPWUID */
/* #undef HAVE_GETPWUID_R */
/* #undef HAVE_GETRLIMIT */
/* #undef HAVE_GETSERVBYPORT_R */
#define HAVE_GETTIMEOFDAY 1
/* #undef HAVE_GLIBC_STRERROR_R */
#define HAVE_GMTIME_R 1
/* #undef HAVE_GNUTLS_CERTIFICATE_SET_X509_KEY_FILE2 */
/* #undef HAVE_GNUTLS_SRP */
/* #undef HAVE_GSSAPI */
/* #undef HAVE_GSSAPI_GSSAPI_GENERIC_H */
/* #undef HAVE_GSSAPI_GSSAPI_H */
/* #undef HAVE_GSSAPI_GSSAPI_KRB5_H */
/* #undef HAVE_GSSGNU */
/* #undef HAVE_GSSHEIMDAL */
/* #undef HAVE_GSSMIT */
/* #undef HAVE_IDNA_STRERROR */
/* #undef HAVE_IDN_FREE */
/* #undef HAVE_IDN_FREE_H */
/* #undef HAVE_IFADDRS_H */
/* #undef HAVE_IF_NAMETOINDEX */
/* #undef HAVE_INET_ADDR */
/* #undef HAVE_INET_NTOA_R */
/* #undef HAVE_INET_NTOA_R_2 */
/* #undef HAVE_INET_NTOA_R_3 */
/* #undef HAVE_INET_NTOP */
/* #undef HAVE_INET_PTON */
#define HAVE_INTTYPES_H 1
/* #undef HAVE_IOCTL */
/* #undef HAVE_IOCTLSOCKET */
/* #undef HAVE_IOCTLSOCKET_CAMEL */
/* #undef HAVE_IOCTLSOCKET_CAMEL_FIONBIO */
/* #undef HAVE_IOCTLSOCKET_FIONBIO */
/* #undef HAVE_IOCTL_FIONBIO */
/* #undef HAVE_IOCTL_SIOCGIFADDR */
/* #undef HAVE_IO_H */
/* #undef HAVE_LBER_H */
/* #undef HAVE_LDAPSSL_H */
/* #undef HAVE_LDAP_H */
/* #undef HAVE_LDAP_INIT_FD */
/* #undef HAVE_LDAP_SSL */
/* #undef HAVE_LDAP_SSL_H */
/* #undef HAVE_LDAP_URL_PARSE */
#define HAVE_LIBGEN_H 1
/* #undef HAVE_LIBIDN */
/* #undef HAVE_LIBRESSL */
/* #undef HAVE_LIBRTMP_RTMP_H */
/* #undef HAVE_LIBSSH2 */
/* #undef HAVE_LIBSSH2_H */
/* #undef HAVE_LIBSSL */
#define HAVE_LIBZ 1
#define HAVE_LIMITS_H 1
#define HAVE_LL 1
#define HAVE_LOCALE_H 1
#define HAVE_LOCALTIME_R 1
#define HAVE_LONGLONG 1
#define HAVE_MALLOC_H 1
/* #undef HAVE_MEMORY_H */
#define HAVE_MEMRCHR 1
/* #undef HAVE_MSG_NOSIGNAL */
#define HAVE_NETDB_H 1
#define HAVE_NETINET_IN_H 1
/* #undef HAVE_NETINET_TCP_H */
/* #undef HAVE_NET_IF_H */
/* #undef HAVE_NGHTTP2_NGHTTP2_H */
/* #undef HAVE_NI_WITHSCOPEID */
/* #undef HAVE_OLD_GSSMIT */
#define HAVE_OPENSSL_CRYPTO_H 1
#define HAVE_OPENSSL_ENGINE_H 1
#define HAVE_OPENSSL_ERR_H 1
#define HAVE_OPENSSL_PEM_H 1
#define HAVE_OPENSSL_PKCS12_H 1
#define HAVE_OPENSSL_RSA_H 1
#define HAVE_OPENSSL_SRP 1
#define HAVE_OPENSSL_SSL_H 1
#define HAVE_OPENSSL_X509_H 1
/* #undef HAVE_PEM_H */
#define HAVE_PERROR 1
/* #undef HAVE_PIPE */
/* #undef HAVE_POLL */
/* #undef HAVE_POLL_FINE */
/* #undef HAVE_POLL_H */
#define HAVE_POSIX_STRERROR_R 1
/* #undef HAVE_PTHREAD_H */
#define HAVE_PWD_H 1
#define HAVE_RAND_EGD 1
/* #undef HAVE_RAND_SCREEN */
#define HAVE_RAND_STATUS 1
#define HAVE_RECV 1
/* #undef HAVE_RSA_H */
#define HAVE_SELECT 1
#define HAVE_SEND 1
#define HAVE_SETJMP_H 1
#define HAVE_SETLOCALE 1
/* #undef HAVE_SETMODE */
/* #undef HAVE_SETRLIMIT */
#define HAVE_SETSOCKOPT 1
#define HAVE_SETSOCKOPT_SO_NONBLOCK 1
/* #undef HAVE_SGTTY_H */
/* #undef HAVE_SIGACTION */
/* #undef HAVE_SIGINTERRUPT */
#define HAVE_SIGNAL 1
#define HAVE_SIGNAL_H 1
/* #undef HAVE_SIGSETJMP */
#define HAVE_SIG_ATOMIC_T 1
/* #undef HAVE_SIG_ATOMIC_T_VOLATILE */
/* #undef HAVE_SOCKADDR_IN6_SIN6_SCOPE_ID */
#define HAVE_SOCKET 1
/* #undef HAVE_SOCKETPAIR */
/* #undef HAVE_SOCKET_H */
#define HAVE_SSLV2_CLIENT_METHOD 1
/* #undef HAVE_SSL_GET_SHUTDOWN */
/* #undef HAVE_SSL_H */
#define HAVE_STDBOOL_H 1
#define HAVE_STDINT_H 1
#define HAVE_STDIO_H 1
#define HAVE_STDLIB_H 1
#define HAVE_STRCASECMP 1
/* #undef HAVE_STRCMPI */
#define HAVE_STRDUP 1
#define HAVE_STRERROR_R 1
/* #undef HAVE_STRICMP */
#define HAVE_STRINGS_H 1
#define HAVE_STRING_H 1
#define HAVE_STRNCASECMP 1
/* #undef HAVE_STRNCMPI */
/* #undef HAVE_STRNICMP */
/* #undef HAVE_STROPTS_H */
#define HAVE_STRSTR 1
#define HAVE_STRTOK_R 1
#define HAVE_STRTOLL 1
/* #undef HAVE_STRUCT_SOCKADDR_STORAGE */
#define HAVE_STRUCT_TIMEVAL 1
/* #undef HAVE_SYS_FILIO_H */
/* #undef HAVE_SYS_IOCTL_H */
#define HAVE_SYS_PARAM_H 1
/* #undef HAVE_SYS_POLL_H */
#define HAVE_SYS_RESOURCE_H 1
#define HAVE_SYS_SELECT_H 1
#define HAVE_SYS_SOCKET_H 1
/* #undef HAVE_SYS_SOCKIO_H */
#define HAVE_SYS_STAT_H 1
#define HAVE_SYS_TIME_H 1
#define HAVE_SYS_TYPES_H 1
/* #undef HAVE_SYS_UIO_H */
/* #undef HAVE_SYS_UN_H */
#define HAVE_SYS_UTIME_H 1
#define HAVE_SYS_WAIT_H 1
/* #undef HAVE_SYS_XATTR_H */
/* #undef HAVE_TERMIOS_H */
/* #undef HAVE_TERMIO_H */
#define HAVE_TIME_H 1
/* #undef HAVE_TLD_H */
/* #undef HAVE_TLD_STRERROR */
/* #undef HAVE_UNAME */
#define HAVE_UNISTD_H 1
/* #undef HAVE_UTIME */
#define HAVE_UTIME_H 1
#define HAVE_VARIADIC_MACROS_C99 1
#define HAVE_VARIADIC_MACROS_GCC 1
/* #undef HAVE_WINBER_H */
/* #undef HAVE_WINDOWS_H */
/* #undef HAVE_WINLDAP_H */
/* #undef HAVE_WINSOCK2_H */
/* #undef HAVE_WINSOCK_H */
/* #undef HAVE_WOLFSSLV3_CLIENT_METHOD */
/* #undef HAVE_WOLFSSL_CTX_USESUPPORTEDCURVE */
/* #undef HAVE_WOLFSSL_GET_PEER_CERTIFICATE */
/* #undef HAVE_WOLFSSL_USEALPN */
/* #undef HAVE_WRITABLE_ARGV */
/* #undef HAVE_WRITEV */
/* #undef HAVE_WS2TCPIP_H */
/* #undef HAVE_X509_H */
#define HAVE_ZLIB_H 1
#define LT_OBJDIR ".libs/"
/* #undef NEED_LBER_H */
/* #undef NEED_MALLOC_H */
/* #undef NEED_MEMORY_H */
/* #undef NEED_REENTRANT */
/* #undef NEED_THREAD_SAFE */
#define NTLM_WB_ENABLED 1
#define NTLM_WB_FILE "/usr/bin/ntlm_auth"
/* #undef RANDOM_FILE */
#define RECV_TYPE_ARG1 int
#define RECV_TYPE_ARG2 void *
#define RECV_TYPE_ARG3 size_t
#define RECV_TYPE_ARG4 int
#define RECV_TYPE_RETV ssize_t
#define RETSIGTYPE void

#define SELECT_QUAL_ARG5
#define SELECT_TYPE_ARG1 int
#define SELECT_TYPE_ARG234 fd_set *
#define SELECT_TYPE_ARG5 struct timeval *
#define SELECT_TYPE_RETV int

#define SEND_QUAL_ARG2 const
#define SEND_TYPE_ARG1 int
#define SEND_TYPE_ARG2 void *
#define SEND_TYPE_ARG3 size_t
#define SEND_TYPE_ARG4 int
#define SEND_TYPE_RETV int

#define SIZEOF_INT 4
#define SIZEOF_LONG 4
/* #undef SIZEOF_LONG_LONG */
#define SIZEOF_OFF_T 4
#define SIZEOF_SHORT 2
#define SIZEOF_SIZE_T 4
#define SIZEOF_TIME_T 4
#define SIZEOF_VOIDP 4
#define STDC_HEADERS 1
#define STRERROR_R_TYPE_ARG3 size_t
#define TIME_WITH_SYS_TIME 1
/* #undef USE_ARES */
/* #undef USE_AXTLS */
/* #undef USE_CYASSL */
/* #undef USE_DARWINSSL */
/* #undef USE_GNUTLS */
/* #undef USE_GNUTLS_NETTLE */
/* #undef USE_LIBPSL */
/* #undef USE_LIBRTMP */
/* #undef USE_LIBSSH2 */
/* #undef USE_MBEDTLS */
/* #undef USE_METALINK */
/* #undef USE_NGHTTP2 */
/* #undef USE_NSS */
/* #undef USE_OPENLDAP */
#define USE_OPENSSL 1
/* #undef USE_POLARSSL */
/* #undef USE_SCHANNEL */
/* #undef USE_THREADS_POSIX */
#define USE_TLS_SRP 1
/* #undef USE_UNIX_SOCKETS */
/* #undef USE_WIN32_IDN */
/* #undef USE_WIN32_LARGE_FILES */
/* #undef USE_WIN32_LDAP */
/* #undef USE_WIN32_SMALL_FILES */
/* #undef USE_WINDOWS_SSPI */
/* #undef WANT_IDN_PROTOTYPES */
/* #undef WIN32_LEAN_AND_MEAN */
#ifndef _ALL_SOURCE
/* #  undef _ALL_SOURCE */
#endif
#ifndef _DARWIN_USE_64_BIT_INODE
# define _DARWIN_USE_64_BIT_INODE 1
#endif
/* #undef _FILE_OFFSET_BITS */
/* #undef _LARGE_FILES */
/* #undef const */
#ifndef __cplusplus
/* #undef inline */
#endif
/* #undef size_t */
/* #undef ssize_t */
#endif
