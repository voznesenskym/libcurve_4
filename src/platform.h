/* src/platform.h.  Generated from platform.h.in by configure.  */
/* src/platform.h.in.  Generated from configure.ac by autoheader.  */

/* Have AIX OS */
/* #undef HAVE_AIX */

/* Have Android OS */
/* #undef HAVE_ANDROID */

/* Define to 1 if you have the <arpa/inet.h> header file. */
#define HAVE_ARPA_INET_H 1

/* Have Cygwin */
/* #undef HAVE_CYGWIN */

/* Define to 1 if you have the <dlfcn.h> header file. */
#define HAVE_DLFCN_H 1

/* Define to 1 if you have the <errno.h> header file. */
#define HAVE_ERRNO_H 1

/* Have FreeBSD OS */
/* #undef HAVE_FREEBSD */

/* Define to 1 if you have the `freeifaddrs' function. */
#define HAVE_FREEIFADDRS 1

/* Define to 1 if you have the `getifaddrs' function. */
#define HAVE_GETIFADDRS 1

/* Define to 1 if you have the `gettimeofday' function. */
#define HAVE_GETTIMEOFDAY 1

/* Have HPUX OS */
/* #undef HAVE_HPUX */

/* Define to 1 if you have the <inttypes.h> header file. */
#define HAVE_INTTYPES_H 1

/* Define to 1 if you have the `czmq' library (-lczmq). */
#define HAVE_LIBCZMQ 1

/* Define to 1 if you have the `pthread' library (-lpthread). */
#define HAVE_LIBPTHREAD 1

/* Define to 1 if you have the `sodium' library (-lsodium). */
#define HAVE_LIBSODIUM 1

/* Define to 1 if you have the `zmq' library (-lzmq). */
#define HAVE_LIBZMQ 1

/* Define to 1 if you have the <limits.h> header file. */
#define HAVE_LIMITS_H 1

/* Have Linux OS */
#define HAVE_LINUX 1

/* Define to 1 if you have the <linux/wireless.h> header file. */
#define HAVE_LINUX_WIRELESS_H 1

/* Define to 1 if you have the <memory.h> header file. */
#define HAVE_MEMORY_H 1

/* Define to 1 if you have the `memset' function. */
/* #undef HAVE_MEMSET */

/* Have MinGW32 */
/* #undef HAVE_MINGW32 */

/* Have NetBSD OS */
/* #undef HAVE_NETBSD */

/* Define to 1 if you have the <netinet/in.h> header file. */
#define HAVE_NETINET_IN_H 1

/* Define to 1 if you have the <netinet/tcp.h> header file. */
#define HAVE_NETINET_TCP_H 1

/* Define to 1 if you have the <net/if.h> header file. */
#define HAVE_NET_IF_H 1

/* Define to 1 if you have the <net/if_media.h> header file. */
/* #undef HAVE_NET_IF_MEDIA_H */

/* Have OpenBSD OS */
/* #undef HAVE_OPENBSD */

/* Have DarwinOSX OS */
/* #undef HAVE_OSX */

/* Define to 1 if you have the `perror' function. */
#define HAVE_PERROR 1

/* Have QNX Neutrino OS */
/* #undef HAVE_QNXNTO */

/* Have Solaris OS */
/* #undef HAVE_SOLARIS */

/* Define to 1 if stdbool.h conforms to C99. */
#define HAVE_STDBOOL_H 1

/* Define to 1 if you have the <stddef.h> header file. */
#define HAVE_STDDEF_H 1

/* Define to 1 if you have the <stdint.h> header file. */
#define HAVE_STDINT_H 1

/* Define to 1 if you have the <stdlib.h> header file. */
#define HAVE_STDLIB_H 1

/* Define to 1 if you have the <strings.h> header file. */
#define HAVE_STRINGS_H 1

/* Define to 1 if you have the <string.h> header file. */
#define HAVE_STRING_H 1

/* Define to 1 if you have the <sys/socket.h> header file. */
#define HAVE_SYS_SOCKET_H 1

/* Define to 1 if you have the <sys/stat.h> header file. */
#define HAVE_SYS_STAT_H 1

/* Define to 1 if you have the <sys/time.h> header file. */
#define HAVE_SYS_TIME_H 1

/* Define to 1 if you have the <sys/types.h> header file. */
#define HAVE_SYS_TYPES_H 1

/* Define to 1 if you have the <unistd.h> header file. */
#define HAVE_UNISTD_H 1

/* Have Windows OS */
/* #undef HAVE_WINDOWS */

/* Define to 1 if you have the <windows.h> header file. */
/* #undef HAVE_WINDOWS_H */

/* Define to 1 if the system has the type `_Bool'. */
#define HAVE__BOOL 1

/* Define to the sub-directory in which libtool stores uninstalled libraries.
   */
#define LT_OBJDIR ".libs/"

/* Define to 1 if your C compiler doesn't accept -c and -o together. */
/* #undef NO_MINUS_C_MINUS_O */

/* Name of package */
#define PACKAGE "curve"

/* Define to the address where bug reports for this package should be sent. */
#define PACKAGE_BUGREPORT "zeromq-dev@lists.zeromq.org"

/* Define to the full name of this package. */
#define PACKAGE_NAME "curve"

/* Define to the full name and version of this package. */
#define PACKAGE_STRING "curve 1.1.0"

/* Define to the one symbol short name of this package. */
#define PACKAGE_TARNAME "curve"

/* Define to the home page for this package. */
#define PACKAGE_URL ""

/* Define to the version of this package. */
#define PACKAGE_VERSION "1.1.0"

/* CURVE major version */
#define PACKAGE_VERSION_MAJOR 1

/* CURVE minor version */
#define PACKAGE_VERSION_MINOR 1

/* CURVE patchlevel */
#define PACKAGE_VERSION_PATCH 0

/* Define as the return type of signal handlers (`int' or `void'). */
#define RETSIGTYPE void

/* Define to 1 if you have the ANSI C header files. */
#define STDC_HEADERS 1

/* Define to 1 if you can safely include both <sys/time.h> and <time.h>. */
#define TIME_WITH_SYS_TIME 1

/* Version number of package */
#define VERSION "1.1.0"

/* Define for Solaris 2.5.1 so the uint32_t typedef from <sys/synch.h>,
   <pthread.h>, or <semaphore.h> is not used. If the typedef were allowed, the
   #define below would cause a syntax error. */
/* #undef _UINT32_T */

/* Define to empty if `const' does not conform to ANSI C. */
/* #undef const */

/* Define to `__inline__' or `__inline' if that's what the C compiler
   calls it, or to nothing if 'inline' is not supported under any name.  */
#ifndef __cplusplus
/* #undef inline */
#endif

/* Define to `unsigned int' if <sys/types.h> does not define. */
/* #undef size_t */

/* Define to `int' if <sys/types.h> does not define. */
/* #undef ssize_t */

/* Define to the type of an unsigned integer type of width exactly 32 bits if
   such a type exists and the standard includes do not define it. */
/* #undef uint32_t */

/* Define to empty if the keyword `volatile' does not work. Warning: valid
   code using `volatile' can become incorrect without. Disable with care. */
/* #undef volatile */
