/**
 * @file limits.h
 * @author ZYH (lymz@foxmail.com)
 * @brief  limits.h for rtthread libc
 * @version 0.1
 * @date 2021-07-29
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef __RTT_LIB_LIMITS_H__
#define __RTT_LIB_LIMITS_H__

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @brief Maximum number of I/O operations in a single 
 * list I/O call supported by the implementation.
 * 
 * Minimum Acceptable Value: {_POSIX_AIO_LISTIO_MAX}
 */
#define AIO_LISTIO_MAX (_POSIX_AIO_LISTIO_MAX)

/**
 * @brief Maximum number of outstanding asynchronous I/O 
 * operations supported by the implementation.
 * 
 * Minimum Acceptable Value: {_POSIX_AIO_MAX}
 * 
 */
#define AIO_MAX (_POSIX_AIO_MAX)

/**
 * @brief The maximum amount by which a process can decrease its asynchronous 
 * I/O priority level from its own scheduling priority. 
 * 
 * Minimum Acceptable Value: 0
 * 
 */
#define AIO_PRIO_DELTA_MAX (16)

/**
 * @brief Maximum length of argument to the exec functions including
 * environment data. 
 * 
 * Minimum Acceptable Value: {_POSIX_ARG_MAX}
 * 
 */
#define ARG_MAX (_POSIX_ARG_MAX)

/**
 * @brief aximum number of functions that may be registered with atexit ( ). 
 * 
 * Minimum Acceptable Value: 32
 * 
 */
#define ATEXIT_MAX (32)

/**
 * @brief Maximum number of simultaneous processes per real user ID. 
 * 
 * Minimum Acceptable Value: {_POSIX_CHILD_MAX}
 * 
 */
#define CHILD_MAX (_POSIX_CHILD_MAX)

/**
 * @brief Maximum number of timer expiration overruns.
 * 
 * Minimum Acceptable Value: {_POSIX_DELAYTIMER_MAX}
 * 
 */
#define DELAYTIMER_MAX  (_POSIX_DELAYTIMER_MAX)

/**
 * @brief Maximum length of a host name (not including the terminating null) as 
 * returned from the gethostname ( ) function.
 * 
 * Minimum Acceptable Value: {_POSIX_HOST_NAME_MAX}
 * 
 */
#define HOST_NAME_MAX   (_POSIX_HOST_NAME_MAX)

/**
 * @brief Maximum number of iovec structures that one process has available for 
 * use with readv() or writev ( ).
 * 
 * Minimum Acceptable Value: {_XOPEN_IOV_MAX}
 * 
 */
#define IOV_MAX (_XOPEN_IOV_MAX)

/**
 * @brief Maximum length of a login name.
 * 
 * Minimum Acceptable Value: {_POSIX_LOGIN_NAME_MAX}
 * 
 */
#define LOGIN_NAME_MAX  (_POSIX_LOGIN_NAME_MAX)

/**
 * @brief The maximum number of open message queue descriptors a process may 
 * hold. 
 * 
 * Minimum Acceptable Value: {_POSIX_MQ_OPEN_MAX}
 * 
 */
#define MQ_OPEN_MAX (_POSIX_MQ_OPEN_MAX)

/**
 * @brief The maximum number of message priorities supported by the 
 * implementation.
 * 
 * Minimum Acceptable Value: {_POSIX_MQ_PRIO_MAX}
 * 
 */
#define MQ_PRIO_MAX (_POSIX_MQ_PRIO_MAX)

/**
 * @brief A value one greater than the maximum value that the system may assign 
 * to a newly-create file descriptor.
 * 
 * Minimum Acceptable Value: {_POSIX_OPEN_MAX}
 * 
 */
#define OPEN_MAX    (_POSIX_OPEN_MAX)

// TODO
/**
 * @brief Size in bytes of a page. 
 * 
 * Minimum Acceptable Value: 1
 * 
 */
#define PAGESIZE    (1)


#ifndef PAGE_SIZE
#ifdef PAGESIZE
/**
 * @brief (XSI) Equivalent to {PAGESIZE}. If either {PAGESIZE} or {PAGE_SIZE} 
 * is defined, the other is defined with the same value.
 * 
 */
#define PAGE_SIZE   (PAGESIZE)
#else
/**
 * @brief (XSI) Equivalent to {PAGESIZE}. If either {PAGESIZE} or {PAGE_SIZE} 
 * is defined, the other is defined with the same value.
 * 
 */
#define PAGE_SIZE   (1)
#endif
#endif

/**
 * @brief Maximum number of attempts made to destroy a thread’s thread-specific 
 * data values o thread exit.
 * Minimum Acceptable Value: {_POSIX_THREAD_DESTRUCTOR_ITERATIONS}
 * 
 */
#define PTHREAD_DESTRUCTOR_ITERATIONS (_POSIX_THREAD_DESTRUCTOR_ITERATIONS)

/**
 * @brief Maximum number of data keys that can be created by a process. 
 * 
 * Minimum Acceptable Value: {_POSIX_THREAD_KEYS_MAX}
 * 
 */
#define PTHREAD_KEYS_MAX    (_POSIX_THREAD_KEYS_MAX)

/**
 * @brief Minimum size in bytes of thread stack storage. 
 * 
 * Minimum Acceptable Value: 0
 * 
 */
#define PTHREAD_STACK_MIN   (0)

/**
 * @brief Maximum number of threads that can be created per process. 
 * 
 * Minimum Acceptable Value: {_POSIX_THREAD_THREADS_MAX}
 * 
 */
#define PTHREAD_THREADS_MAX (_POSIX_THREAD_THREADS_MAX)

/**
 * @brief Maximum number of repeated occurrences of a BRE or ERE interval 
 * expression; 
 * see Sectio 9.3.6 (on page 186) and Section 9.4.6 (on page 189).
 * 
 * Minimum Acceptable Value: {_POSIX2_RE_DUP_MAX}
 * 
 */
#define RE_DUP_MAX  (_POSIX2_RE_DUP_MAX)

/**
 * @brief Maximum number of realtime signals reserved for application use in 
 * this implementation. 
 * 
 * Minimum Acceptable Value: {_POSIX_RTSIG_MAX}
 * 
 */
#define RTSIG_MAX   (_POSIX_RTSIG_MAX)

/**
 * @brief Maximum number of semaphores that a process may have. 
 * 
 * Minimum Acceptable Value: {_POSIX_SEM_NSEMS_MAX}
 * 
 */
#define SEM_NSEMS_MAX   (_POSIX_SEM_NSEMS_MAX)

/**
 * @brief The maximum value a semaphore may have.
 * 
 * Minimum Acceptable Value: {_POSIX_SEM_VALUE_MAX}
 * 
 */
#define SEM_VALUE_MAX   (_POSIX_SEM_VALUE_MAX)

/**
 * @brief Maximum number of queued signals that a process may send and have 
 * pending at th receiver(s) at any time.
 * 
 * Minimum Acceptable Value: {_POSIX_SIGQUEUE_MAX}
 * 
 */
#define SIGQUEUE_MAX    (_POSIX_SIGQUEUE_MAX)

/**
 * @brief (SS|TSP) The maximum number of replenishment operations that may be 
 * simultaneously pending for a particular sporadic server scheduler.
 * 
 * Minimum Acceptable Value: {_POSIX_SS_REPL_MAX}
 * 
 */
#define SS_REPL_MAX     (_POSIX_SS_REPL_MAX)

/**
 * @brief Maximum number of streams that one process can have open at one time. 
 * If defined, it ha the same value as {FOPEN_MAX} (see <stdio.h>).
 * 
 * Minimum Acceptable Value: {_POSIX_STREAM_MAX}
 * 
 */
#define STREAM_MAX      (_POSIX_STREAM_MAX)

/**
 * @brief Maximum number of symbolic links that can be reliably traversed in 
 * the resolution of pathname in the absence of a loop.
 * 
 * Minimum Acceptable Value: {_POSIX_SYMLOOP_MAX}
 * 
 */
#define SYMLOOP_MAX     (_POSIX_SYMLOOP_MAX)

/**
 * @brief Maximum number of timers per process supported by the implementation. 
 * 
 * Minimum Acceptable Value: {_POSIX_TIMER_MAX}
 * 
 */
#define TIMER_MAX       (_POSIX_TIMER_MAX)

/**
 * @brief (OB TRC) Maximum length of the trace event name (not including the 
 * terminating null). 
 * 
 * Minimum Acceptable Value: {_POSIX_TRACE_EVENT_NAME_MAX}
 * 
 */
#define TRACE_EVENT_NAME_MAX    (_POSIX_TRACE_EVENT_NAME_MAX)

/**
 * @brief (OB TRC) Maximum length of the trace generation version string or of 
 * the trace stream name (not including the terminating null).
 * 
 * Minimum Acceptable Value: {_POSIX_TRACE_NAME_MAX}
 * 
 */
#define TRACE_NAME_MAX      (_POSIX_TRACE_NAME_MAX)

/**
 * @brief (OB TRC) Maximum number of trace streams that may simultaneously exist
 * in the system. 
 * 
 * Minimum Acceptable Value: {_POSIX_TRACE_SYS_MAX}
 * 
 */
#define TRACE_SYS_MAX       (_POSIX_TRACE_SYS_MAX)

/**
 * @brief Maximum number of user trace event type identifiers that may 
 * simultaneously exist in a traced process, including the predefined user 
 * trace event POSIX_TRACE_UNNAMED_USER_EVENT.
 * 
 * Minimum Acceptable Value: {_POSIX_TRACE_USER_EVENT_MAX}
 * 
 */
#define TRACE_USER_EVENT_MAX    (_POSIX_TRACE_USER_EVENT_MAX)

/**
 * @brief Maximum length of terminal device name.
 * 
 * Minimum Acceptable Value: {_POSIX_TTY_NAME_MAX}
 * 
 */
#define TTY_NAME_MAX        (_POSIX_TTY_NAME_MAX)

/**
 * @brief Maximum number of bytes supported for the name of a timezone (not of 
 * the TZ variable). 
 * Minimum Acceptable Value: {_POSIX_TZNAME_MAX}
 * 
 * Note: The length given by {TZNAME_MAX} does not include the quoting 
 * characters mentioned i Section 8.3 (on page 177).
 * 
 */
#define TZNAME_MAX          (_POSIX_TZNAME_MAX)

/**
 * @brief Minimum number of bits needed to represent, as a signed integer value, 
 * the maximum siz of a regular file allowed in the specified directory.
 * 
 * Minimum Acceptable Value: 32
 * 
 */
#define FILESIZEBITS    WORD_BIT

/**
 * @brief Maximum number of links to a single file. 
 * 
 * Minimum Acceptable Value: {_POSIX_LINK_MAX}
 * 
 */
#define LINK_MAX    (_POSIX_LINK_MAX)

/**
 * @brief Maximum number of bytes in a terminal canonical input line. 
 * 
 * Minimum Acceptable Value: {_POSIX_MAX_CANON}
 * 
 */
#define MAX_CANON   (_POSIX_MAX_CANON)

/**
 * @brief Minimum number of bytes for which space is available in a terminal 
 * input queue; therefore, the maximum number of bytes a conforming application 
 * may require to be typed as input before reading them.
 * 
 * Minimum Acceptable Value: {_POSIX_MAX_INPUT}
 * 
 */
#define MAX_INPUT   (_POSIX_MAX_INPUT)

/**
 * @brief Maximum number of bytes in a filename (not including the terminating 
 * null). 
 * 
 * Minimum Acceptable Value: {_POSIX_NAME_MAX}
 * (XSI) Minimum Acceptable Value: {_XOPEN_NAME_MAX}
 * 
 */
#define NAME_MAX    (255)

/**
 * @brief Maximum number of bytes the implementation will store as a pathname 
 * in a user-supplie buffer of unspecified size, including the terminating null 
 * character. Minimum number th implementation will accept as the maximum number
 * of bytes in a pathname.
 * 
 * Minimum Acceptable Value: {_POSIX_PATH_MAX}
 * (XSI) Minimum Acceptable Value: {_XOPEN_PATH_MAX}
 * 
 */
#define PATH_MAX    (_POSIX_PATH_MAX)

/**
 * @brief Maximum number of bytes that is guaranteed to be atomic when writing 
 * to a pipe. 
 * 
 * Minimum Acceptable Value: {_POSIX_PIPE_BUF}
 * 
 */
#define PIPE_BUF    (_POSIX_PIPE_BUF)

/**
 * @brief (ADV) Minimum number of bytes of storage actually allocated for any 
 * portion of a file. 
 * 
 * Minimum Acceptable Value: Not specified.
 * 
 */
#define POSIX_ALLOC_SIZE_MIN    (4)

/**
 * @brief (ADV) Recommended increment for file transfer sizes between the 
 * {POSIX_REC_MIN_XFER_SIZE} and {POSIX_REC_MAX_XFER_SIZE} values.
 * 
 * Minimum Acceptable Value: Not specified.
 * 
 */
#define POSIX_REC_INCR_XFER_SIZE    (0)

/**
 * @brief (ADV) Maximum recommended file transfer size. 
 * 
 * Minimum Acceptable Value: Not specified.
 * 
 */
#define POSIX_REC_MAX_XFER_SIZE     (4096)

/**
 * @brief (ADV) Minimum recommended file transfer size.
 * 
 * Minimum Acceptable Value: Not specified.
 * 
 */
#define POSIX_REC_MIN_XFER_SIZE     (0)

/**
 * @brief (ADV) Recommended file transfer buffer alignment. 
 * 
 * Minimum Acceptable Value: Not specified.
 * 
 */
#define POSIX_REC_XFER_ALIGN    (4)

/**
 * @brief Maximum number of bytes in a symbolic link. 
 * 
 * Minimum Acceptable Value: {_POSIX_SYMLINK_MAX}
 * 
 */
#define SYMLINK_MAX     (_POSIX_SYMLINK_MAX)

/**
 * @brief Maximum obase values allowed by the bc utility.
 * 
 * Minimum Acceptable Value: {_POSIX2_BC_BASE_MAX}
 * 
 */
#define BC_BASE_MAX     (_POSIX2_BC_BASE_MAX)

/**
 * @brief Maximum number of elements permitted in an array by the bc utility. 
 * 
 * Minimum Acceptable Value: {_POSIX2_BC_DIM_MAX}
 * 
 */
#define BC_DIM_MAX      (_POSIX2_BC_DIM_MAX)

/**
 * @brief Maximum scale value allowed by the bc utility.
 * 
 * Minimum Acceptable Value: {_POSIX2_BC_SCALE_MAX}
 * 
 */
#define BC_SCALE_MAX    (_POSIX2_BC_SCALE_MAX)

/**
 * @brief Maximum length of a string constant accepted by the bc utility. 
 * 
 * Minimum Acceptable Value: {_POSIX2_BC_STRING_MAX}
 * 
 */
#define BC_STRING_MAX   (_POSIX2_BC_STRING_MAX)

/**
 * @brief Maximum number of bytes in a character class name.
 * 
 * Minimum Acceptable Value: {_POSIX2_CHARCLASS_NAME_MAX}
 * 
 */
#define CHARCLASS_NAME_MAX  (_POSIX2_CHARCLASS_NAME_MAX)

/**
 * @brief Maximum number of weights that can be assigned to an entry of the 
 * LC_COLLATE order keyword in the locale definition file; 
 * see Chapter 7 (on page 135).
 * 
 * Minimum Acceptable Value: {_POSIX2_COLL_WEIGHTS_MAX}
 * 
 */
#define COLL_WEIGHTS_MAX    (_POSIX2_COLL_WEIGHTS_MAX)

/**
 * @brief Maximum number of expressions that can be nested within parentheses 
 * by the expr utility.
 * 
 * Minimum Acceptable Value: {_POSIX2_EXPR_NEST_MAX}
 * 
 */
#define EXPR_NEST_MAX       (_POSIX2_EXPR_NEST_MAX)

/**
 * @brief Unless otherwise noted, the maximum length, in bytes, of a utility’s 
 * input line (either standard input or another file), when the utility is 
 * described as processing text files. The length includes room for the trailing
 * <newline>.
 * 
 * Minimum Acceptable Value: {_POSIX2_LINE_MAX}
 * 
 */
#define LINE_MAX        (_POSIX2_LINE_MAX)

/**
 * @brief Maximum number of simultaneous supplementary group IDs per process. 
 * 
 * Minimum Acceptable Value: {_POSIX_NGROUPS_MAX}
 * 
 */
#define NGROUPS_MAX     (_POSIX_NGROUPS_MAX)

/**
 * @brief Maximum number of repeated occurrences of a regular expression 
 * permitted when using the interval notation \{m,n\};
 * see Chapter 9 (on page 181).
 * 
 * Minimum Acceptable Value: {_POSIX2_RE_DUP_MAX}
 * 
 */
#define RE_DUP_MAX      (_POSIX2_RE_DUP_MAX)

/**
 * @brief The resolution of the CLOCK_REALTIME clock, in nanoseconds.
 * If the Monotonic Clock option is supported, the resolution of 
 * the CLOCK_MONOTONIC clock, in nanoseconds, 
 * is represented by {_POSIX_CLOCKRES_MIN}.
 * 
 */
#define _POSIX_CLOCKRES_MIN     (20000000UL)

/**
 * @brief The number of I/O operations that can be specified in a list I/O call.
 * 
 */
#define _POSIX_AIO_LISTIO_MAX   (2)

/**
 * @brief The number of outstanding asynchronous I/O operations.
 * 
 */
#define _POSIX_AIO_MAX          (1)

/**
 * @brief Maximum length of argument to the exec functions including 
 * environment data.
 * 
 */
#define _POSIX_ARG_MAX          (4096)

/**
 * @brief Maximum number of simultaneous processes per real user ID.
 * 
 */
#define _POSIX_CHILD_MAX        (25)

/**
 * @brief The number of timer expiration overruns.
 * 
 */
#define _POSIX_DELAYTIMER_MAX   (32)

/**
 * @brief Maximum length of a host name (not including the terminating null)
 * as returned from the gethostname ( ) function.
 * 
 */
#define _POSIX_HOST_NAME_MAX    (255)

/**
 * @brief Maximum number of links to a single file.
 * 
 */
#define _POSIX_LINK_MAX         (8)

/**
 * @brief The size of the storage required for a login name, 
 * in bytes (including the terminating null).
 * 
 */
#define _POSIX_LOGIN_NAME_MAX   (9)

/**
 * @brief Maximum number of bytes in a terminal canonical input queue.
 * 
 */
#define _POSIX_MAX_CANON        (255)

/**
 * @brief Maximum number of bytes allowed in a terminal input queue.
 * 
 */
#define _POSIX_MAX_INPUT        (255)

/**
 * @brief The number of message queues that can be open for a single process.
 * 
 */
#define _POSIX_MQ_OPEN_MAX      (8)

/**
 * @brief The maximum number of message priorities supported by the 
 * implementation.
 * 
 */
#define _POSIX_MQ_PRIO_MAX      (32)

/**
 * @brief Maximum number of bytes in a filename 
 * (not including the terminating null).
 * 
 */
#define _POSIX_NAME_MAX         (14)

/**
 * @brief Maximum number of simultaneous supplementary group IDs per process.
 * 
 */
#define _POSIX_NGROUPS_MAX      (8)

/**
 * @brief Maximum number of files that one process can have open at any 
 * one time.
 * 
 */
#define _POSIX_OPEN_MAX         (20)

/**
 * @brief Minimum number the implementation will accept as the maximum number 
 * of bytes in a pathname.
 * 
 */
#define _POSIX_PATH_MAX         (256)

/**
 * @brief Maximum number of bytes that is guaranteed to be atomic when 
 * writing to a pipe.
 * 
 */
#define _POSIX_PIPE_BUF         (512)

/**
 * @brief The number of repeated occurrences of a BRE permitted by the 
 * regexec() and regcomp()
 * functions when using the interval notation {\(m,n\}; 
 * see <POSIX IEEE Std 1003.1-2008.pdf> Section 9.3.6 (on page 186).
 * 
 */
#define _POSIX_RE_DUP_MAX       (255)

/**
 * @brief The number of realtime signal numbers reserved for application use.
 * 
 */
#define _POSIX_RTSIG_MAX        (8)

/**
 * @brief The number of semaphores that a process may have.
 * 
 */
#define _POSIX_SEM_NSEMS_MAX    (256)

/**
 * @brief The maximum value a semaphore may have.
 * 
 */
#define _POSIX_SEM_VALUE_MAX    (32767)

/**
 * @brief The number of queued signals that a process may send and have 
 * pending at the receiver(s) at any time.
 * 
 */
#define _POSIX_SIGQUEUE_MAX     (32)

/**
 * @brief The value that can be stored in an object of type ssize_t.
 * 
 */
#define _POSIX_SSIZE_MAX        (32767)

/**
 * @brief (SS|TSP) The number of replenishment operations that may be 
 * simultaneously pending for a particular sporadic server scheduler.
 * 
 */
#define _POSIX_SS_REPL_MAX      (4)

/**
 * @brief The number of streams that one process can have open at one time.
 * 
 */
#define _POSIX_STREAM_MAX       (8)

/**
 * @brief The number of bytes in a symbolic link.
 * 
 */
#define _POSIX_SYMLINK_MAX      (255)

/**
 * @brief The number of symbolic links that can be traversed in the resolution 
 * of a pathname in the absence of a loop.
 * 
 */
#define _POSIX_SYMLOOP_MAX      (8)

/**
 * @brief The number of attempts made to destroy a thread’s thread-specific 
 * data values on thread exit.
 * 
 */
#define _POSIX_THREAD_DESTRUCTOR_ITERATIONS (4)

/**
 * @brief The number of data keys per process.
 * 
 */
#define _POSIX_THREAD_KEYS_MAX  (128)

/**
 * @brief The number of threads per process.
 * 
 */
#define _POSIX_THREAD_THREADS_MAX   (64)

/**
 * @brief The per-process number of timers.
 * 
 */
#define _POSIX_TIMER_MAX        (32)

/**
 * @brief (OB TRC) The length in bytes of a trace event name 
 * (not including the terminating null).
 * 
 */
#define _POSIX_TRACE_EVENT_NAME_MAX (30)

/**
 * @brief (OB TRC) The length in bytes of a trace generation version string or 
 * a trace stream name (not including the terminating null).
 * 
 */
#define _POSIX_TRACE_NAME_MAX   (8)

/**
 * @brief (OB TRC) The number of trace streams that may simultaneously exist 
 * in the system.
 * 
 */
#define _POSIX_TRACE_SYS_MAX    (8)

/**
 * @brief (OB TRC) The number of user trace event type identifiers that may 
 * simultaneously exist in a traced process, including the predefined user 
 * trace event POSIX_TRACE_UNNAMED_USER_EVENT.
 * 
 */
#define _POSIX_TRACE_USER_EVENT_MAX (32)

/**
 * @brief The size of the storage required for a terminal device name, in bytes 
 * (including th terminating null).
 * 
 */
#define _POSIX_TTY_NAME_MAX     (9)

/**
 * @brief Maximum number of bytes supported for the name of a timezone (not of 
 * the TZ variable).
 * Note: The length given by {_POSIX_TZNAME_MAX} does not include the quoting 
 * character mentioned in Section 8.3 (on page 177).
 * 
 */
#define _POSIX_TZNAME_MAX       (6)

/**
 * @brief Maximum obase values allowed by the bc utility.
 * 
 */
#define _POSIX2_BC_BASE_MAX     (99)

/**
 * @brief Maximum number of elements permitted in an array by the bc utility.
 * 
 */
#define _POSIX2_BC_DIM_MAX      (2048)

/**
 * @brief Maximum scale value allowed by the bc utility.
 * 
 */
#define _POSIX2_BC_SCALE_MAX    (99)

/**
 * @brief Maximum length of a string constant accepted by the bc utility.
 * 
 */
#define _POSIX2_BC_STRING_MAX   (1000)

/**
 * @brief Maximum number of bytes in a character class name.
 * 
 */
#define _POSIX2_CHARCLASS_NAME_MAX  (14)

/**
 * @brief Maximum number of weights that can be assigned to an entry of 
 * the LC_COLLATE order keyword in the locale definition file;
 * see Chapter 7 (on page 135).
 * 
 */
#define _POSIX2_COLL_WEIGHTS_MAX    (2)

/**
 * @brief Maximum number of expressions that can be nested within 
 * parentheses by the expr utility.
 * 
 */
#define _POSIX2_EXPR_NEST_MAX       (32)

/**
 * @brief Unless otherwise noted, the maximum length, in bytes, of a utility’s 
 * input line (either standard input or another file), when the utility is 
 * described as processing text files. The length includes room for the 
 * trailing <newline>.
 * 
 */
#define _POSIX2_LINE_MAX        (2048)

/**
 * @brief Maximum number of repeated occurrences of a regular expression 
 * permitted when using the interval notation \{m,n\}; 
 * see Chapter 9 (on page 181).
 * 
 */
#define _POSIX2_RE_DUP_MAX      (255)

/**
 * @brief Maximum number of iovec structures that one process has available for 
 * use with readv() or writev ( ).
 * 
 */
#define _XOPEN_IOV_MAX          (16)

/**
 * @brief Maximum number of bytes in a filename 
 * (not including the terminating null).
 * 
 */
#define _XOPEN_NAME_MAX         (255)

/**
 * @brief Minimum number the implementation will accept as the maximum number 
 * of bytes in a pathname.
 * 
 */
#define _XOPEN_PATH_MAX         (1024)

/**
 * @brief Number of bits in a type char.
 * 
 */
#define CHAR_BIT        (8)

// TODO: To support different compiler
/**
 * @brief Maximum value for an object of type char.
 * 
 * Value: {UCHAR_MAX} or {SCHAR_MAX}
 * 
 */
#define CHAR_MAX        (SCHAR_MAX)

/**
 * @brief Minimum value for an object of type char.
 * 
 * Value: {SCHAR_MIN} or 0
 * 
 */
#define CHAR_MIN        (SCHAR_MIN)

//***********************************************
/**
 * @brief Maximum value for an object of type int. 
 * 
 * Minimum Acceptable Value: 2147483647
 * 
 */
#define INT_MAX         (2147483647)

/**
 * @brief Minimum value for an object of type int. 
 * 
 * Maximum Acceptable Value: −2147483647
 * 
 */
#define INT_MIN         (−2147483647)

/**
 * @brief Maximum value for an object of type long long. 
 * 
 * Minimum Acceptable Value: +9223372036854775807 
 * 
 */
#define LLONG_MAX       (9223372036854775807)

/**
 * @brief Minimum value for an object of type long long. 
 * 
 * Maximum Acceptable Value: −9223372036854775807
 * 
 */
#define LLONG_MIN       (-9223372036854775807)

// TODO: To support 64bits machine and 32bits machine****
/**
 * @brief Number of bits in an object of type long.
 * 
 * Minimum Acceptable Value: 32
 * 
 */
#define LONG_BIT        (32)


/**
 * @brief Maximum value for an object of type long.
 * 
 * Minimum Acceptable Value: +2147483647
 * 
 */
#define LONG_MAX        (2147483647)

/**
 * @brief Minimum value for an object of type long.
 * 
 * Minimum Acceptable Value: -2147483647
 * 
 */
#define LONG_MIN         (−2147483647)
//*******************************************************

/**
 * @brief Maximum number of bytes in a character, for any supported locale. 
 * 
 * Minimum Acceptable Value: 1
 * 
 */
#define MB_LEN_MAX      (1)

/**
 * @brief Maximum value for an object of type signed char.
 * 
 */
#define SCHAR_MAX       (127)

/**
 * @brief Minimum value for an object of type signed char.
 * 
 */
#define SCHAR_MIN       (-128)

/**
 * @brief Maximum value for an object of type short.
 *  
 * Minimum Acceptable Value: +32767
 * 
 */
#define SHRT_MAX        (32767)

/**
 * @brief Minimum value for an object of type short.
 * 
 Maximum Acceptable Value: −32767
 * 
 */
#define SHRT_MIN        (-32767)

// TODO
/**
 * @brief Maximum value for an object of type ssize_t.
 * 
 * Minimum Acceptable Value: {_POSIX_SSIZE_MAX}
 * 
 */
#define SSIZE_MAX       _POSIX_SSIZE_MAX

/**
 * @brief Maximum value for an object of type unsigned char.
 * 
 */
#define UCHAR_MAX       (255U)

/**
 * @brief Maximum value for an object of type unsigned. 
 * 
 * Minimum Acceptable Value: 4294967295
 * 
 */
#define UINT_MAX        (4294967295U)

/**
 * @brief Maximum value for an object of type unsigned long long. 
 * 
 * Minimum Acceptable Value: 18446744073709551615
 * 
 */
#define ULLONG_MAX      (18446744073709551615ULL)

//TODO
/**
 * @brief Maximum value for an object of type unsigned long. 
 * 
 * Minimum Acceptable Value: 4294967295
 * 
 */
#define ULONG_MAX       (4294967295U)

/**
 * @brief Maximum value for an object of type unsigned short. 
 * 
 * Minimum Acceptable Value: 65535
 * 
 */
#define USHRT_MAX       (65535)

/**
 * @brief Number of bits in an object of type int. 
 * 
 * Minimum Acceptable Value: 32
 * 
 */
#define WORD_BIT        (32)

/**
 * @brief Maximum value of n in conversion specifications using the "%n$" 
 * sequence in calls to th printf ( ) and scanf ( ) families of functions.
 * 
 * Minimum Acceptable Value: 9
 * 
 */
#define NL_ARGMAX   (9)

/**
 * @brief Maximum number of bytes in a LANG name. 
 * 
 * Minimum Acceptable Value: 14
 * 
 */
#define NL_LANGMAX  (14)

/**
 * @brief Maximum message number. 
 * 
 * Minimum Acceptable Value: 32767
 * 
 */
#define NL_MSGMAX   (32767)

/**
 * @brief Maximum set number. 
 * 
 * Minimum Acceptable Value: 255
 * 
 */
#define NL_SETMAX   (255)

/**
 * @brief Maximum number of bytes in a message string. 
 * 
 * Minimum Acceptable Value: {_POSIX2_LINE_MAX}
 * 
 */
#define NL_TEXTMAX  (_POSIX2_LINE_MAX)

/**
 * @brief Default process priority. 
 * 
 * Minimum Acceptable Value: 20
 * 
 */
#define NZERO   (20)

#ifdef __cplusplus
}
#endif

#endif /* __RTT_LIB_LIMITS_H__ */
