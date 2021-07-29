#include <limits.h>

#ifndef __RTT_LIB_LIMITS_H__
#error "not RTTL limits.h"
#endif

#ifndef AIO_LISTIO_MAX
#error "not define AIO_LISTIO_MAX"
#elif AIO_LISTIO_MAX < _POSIX_AIO_LISTIO_MAX
#error "AIO_LISTIO_MAX must >= _POSIX_AIO_LISTIO_MAX"
#endif

#ifndef AIO_MAX
#error "not define AIO_MAX"
#elif AIO_MAX < _POSIX_AIO_MAX
#error "AIO_MAX must >= _POSIX_AIO_MAX"
#endif

#ifndef AIO_PRIO_DELTA_MAX
#error "not define AIO_PRIO_DELTA_MAX"
#elif AIO_PRIO_DELTA_MAX < 0
#error "AIO_PRIO_DELTA_MAX must >= 0"
#endif

#ifndef ARG_MAX
#error "not define ARG_MAX"
#elif ARG_MAX < _POSIX_ARG_MAX
#error "ARG_MAX must >= _POSIX_ARG_MAX"
#endif

#ifndef ATEXIT_MAX
#error "not define ATEXIT_MAX"
#elif ATEXIT_MAX < 32
#error "ATEXIT_MAX must >= 32"
#endif

#ifndef CHILD_MAX
#error "not define CHILD_MAX"
#elif CHILD_MAX < _POSIX_CHILD_MAX
#error "CHILD_MAX must >= _POSIX_CHILD_MAX"
#endif

#ifndef DELAYTIMER_MAX
#error "not define DELAYTIMER_MAX"
#elif DELAYTIMER_MAX < _POSIX_DELAYTIMER_MAX
#error "DELAYTIMER_MAX must >= _POSIX_DELAYTIMER_MAX"
#endif

#ifndef HOST_NAME_MAX
#error "not define HOST_NAME_MAX"
#elif HOST_NAME_MAX < _POSIX_HOST_NAME_MAX
#error "HOST_NAME_MAX must >= _POSIX_HOST_NAME_MAX"
#endif

#ifndef IOV_MAX
#error "not define IOV_MAX"
#elif IOV_MAX < _XOPEN_IOV_MAX
#error "IOV_MAX must >= _XOPEN_IOV_MAX"
#endif

#ifndef LOGIN_NAME_MAX
#error "not define LOGIN_NAME_MAX"
#elif LOGIN_NAME_MAX < _POSIX_LOGIN_NAME_MAX
#error "LOGIN_NAME_MAX must >= _POSIX_LOGIN_NAME_MAX"
#endif

#ifndef MQ_OPEN_MAX
#error "not define MQ_OPEN_MAX"
#elif MQ_OPEN_MAX < _POSIX_MQ_OPEN_MAX
#error "MQ_OPEN_MAX must >= _POSIX_MQ_OPEN_MAX"
#endif

#ifndef MQ_PRIO_MAX
#error "not define MQ_PRIO_MAX"
#elif MQ_PRIO_MAX < _POSIX_MQ_PRIO_MAX
#error "MQ_PRIO_MAX must >= _POSIX_MQ_PRIO_MAX"
#endif

#ifndef OPEN_MAX
#error "not define OPEN_MAX"
#elif OPEN_MAX < _POSIX_OPEN_MAX
#error "OPEN_MAX must >= _POSIX_OPEN_MAX"
#endif

#ifndef PAGESIZE
#error "not define PAGESIZE"
#elif PAGESIZE < 1
#error "PAGESIZE must >= 1"
#endif

#ifndef PAGE_SIZE
#error "not define PAGE_SIZE"
#elif PAGE_SIZE != PAGESIZE
#error "PAGE_SIZE must == PAGESIZE"
#endif

#ifndef PTHREAD_DESTRUCTOR_ITERATIONS
#error "not define PTHREAD_DESTRUCTOR_ITERATIONS"
#elif PTHREAD_DESTRUCTOR_ITERATIONS < _POSIX_THREAD_DESTRUCTOR_ITERATIONS
#error "PTHREAD_DESTRUCTOR_ITERATIONS must >= _POSIX_THREAD_DESTRUCTOR_ITERATIONS"
#endif

#ifndef PTHREAD_KEYS_MAX
#error "not define PTHREAD_KEYS_MAX"
#elif PTHREAD_KEYS_MAX < _POSIX_THREAD_KEYS_MAX
#error "PTHREAD_KEYS_MAX must >= _POSIX_THREAD_KEYS_MAX"
#endif

#ifndef PTHREAD_STACK_MIN
#error "not define PTHREAD_STACK_MIN"
#elif PTHREAD_STACK_MIN < 0
#error "PTHREAD_STACK_MIN must >= 0"
#endif

#ifndef PTHREAD_THREADS_MAX
#error "not define PTHREAD_THREADS_MAX"
#elif PTHREAD_THREADS_MAX < _POSIX_THREAD_THREADS_MAX
#error "PTHREAD_THREADS_MAX must >= _POSIX_THREAD_THREADS_MAX"
#endif

#ifndef RE_DUP_MAX
#error "not define RE_DUP_MAX"
#elif RE_DUP_MAX < _POSIX2_RE_DUP_MAX
#error "RE_DUP_MAX must >= _POSIX2_RE_DUP_MAX"
#endif

#ifndef RTSIG_MAX
#error "not define RTSIG_MAX"
#elif RTSIG_MAX < _POSIX_RTSIG_MAX
#error "RTSIG_MAX must >= _POSIX_RTSIG_MAX"
#endif

#ifndef SEM_NSEMS_MAX
#error "not define SEM_NSEMS_MAX"
#elif SEM_NSEMS_MAX < _POSIX_SEM_NSEMS_MAX
#error "SEM_NSEMS_MAX must >= _POSIX_SEM_NSEMS_MAX"
#endif

#ifndef SEM_VALUE_MAX
#error "not define SEM_VALUE_MAX"
#elif SEM_VALUE_MAX < _POSIX_SEM_VALUE_MAX
#error "SEM_VALUE_MAX must >= _POSIX_SEM_VALUE_MAX"
#endif

#ifndef SIGQUEUE_MAX
#error "not define SIGQUEUE_MAX"
#elif SIGQUEUE_MAX < _POSIX_SIGQUEUE_MAX
#error "SIGQUEUE_MAX must >= _POSIX_SIGQUEUE_MAX"
#endif

#ifndef SS_REPL_MAX
#error "not define SS_REPL_MAX"
#elif SS_REPL_MAX < _POSIX_SS_REPL_MAX
#error "SS_REPL_MAX must >= _POSIX_SS_REPL_MAX"
#endif

#ifndef STREAM_MAX
#error "not define STREAM_MAX"
#elif STREAM_MAX < _POSIX_STREAM_MAX
#error "STREAM_MAX must >= _POSIX_STREAM_MAX"
#endif

#ifndef SYMLOOP_MAX
#error "not define SYMLOOP_MAX"
#elif SYMLOOP_MAX < _POSIX_SYMLOOP_MAX
#error "SYMLOOP_MAX must >= _POSIX_SYMLOOP_MAX"
#endif

#ifndef TIMER_MAX
#error "not define TIMER_MAX"
#elif TIMER_MAX < _POSIX_TIMER_MAX
#error "TIMER_MAX must >= _POSIX_TIMER_MAX"
#endif

#ifndef TRACE_EVENT_NAME_MAX
#error "not define TRACE_EVENT_NAME_MAX"
#elif TRACE_EVENT_NAME_MAX < _POSIX_TRACE_EVENT_NAME_MAX
#error "TRACE_EVENT_NAME_MAX must >= _POSIX_TRACE_EVENT_NAME_MAX"
#endif

#ifndef TRACE_NAME_MAX
#error "not define TRACE_NAME_MAX"
#elif TRACE_NAME_MAX < _POSIX_TRACE_NAME_MAX
#error "TRACE_NAME_MAX must >= _POSIX_TRACE_NAME_MAX"
#endif

#ifndef TRACE_SYS_MAX
#error "not define TRACE_SYS_MAX"
#elif TRACE_SYS_MAX < _POSIX_TRACE_SYS_MAX
#error "TRACE_SYS_MAX must >= _POSIX_TRACE_SYS_MAX"
#endif

#ifndef TRACE_USER_EVENT_MAX
#error "not define TRACE_USER_EVENT_MAX"
#elif TRACE_USER_EVENT_MAX < _POSIX_TRACE_USER_EVENT_MAX
#error "TRACE_USER_EVENT_MAX must >= _POSIX_TRACE_USER_EVENT_MAX"
#endif

#ifndef TTY_NAME_MAX
#error "not define TTY_NAME_MAX"
#elif TTY_NAME_MAX < _POSIX_TTY_NAME_MAX
#error "TTY_NAME_MAX must >= _POSIX_TTY_NAME_MAX"
#endif

#ifndef TZNAME_MAX
#error "not define TZNAME_MAX"
#elif TZNAME_MAX < _POSIX_TZNAME_MAX
#error "TZNAME_MAX must >= _POSIX_TZNAME_MAX"
#endif

#ifndef FILESIZEBITS    WORD_BIT
#error "not define FILESIZEBITS"
#elif FILESIZEBITS != WORD_BIT
#error "FILESIZEBITS must == WORD_BIT"
#endif

#ifndef LINK_MAX
#error "not define LINK_MAX"
#elif LINK_MAX < _POSIX_LINK_MAX
#error "LINK_MAX must >= _POSIX_LINK_MAX"
#endif

#ifndef MAX_CANON
#error "not define MAX_CANON"
#elif MAX_CANON < _POSIX_MAX_CANON
#error "MAX_CANON must >= _POSIX_MAX_CANON"
#endif

#ifndef MAX_INPUT
#error "not define MAX_INPUT"
#elif MAX_INPUT < _POSIX_MAX_INPUT
#error "MAX_INPUT must >= _POSIX_MAX_INPUT"
#endif

#ifndef NAME_MAX
#error "not define NAME_MAX"
#elif NAME_MAX < _POSIX_NAME_MAX
#error "NAME_MAX must >= _POSIX_NAME_MAX"
#endif

#ifndef PATH_MAX
#error "not define PATH_MAX"
#elif PATH_MAX < _POSIX_PATH_MAX
#error "PATH_MAX must >= _POSIX_PATH_MAX"
#endif

#ifndef PIPE_BUF
#error "not define PIPE_BUF"
#elif PIPE_BUF < _POSIX_PIPE_BUF
#error "PIPE_BUF must >= _POSIX_PIPE_BUF"
#endif

#ifndef POSIX_ALLOC_SIZE_MIN
#error "not define POSIX_ALLOC_SIZE_MIN"
#endif

#ifndef POSIX_REC_INCR_XFER_SIZE
#error "not define POSIX_REC_INCR_XFER_SIZE"
#elif (POSIX_REC_INCR_XFER_SIZE < POSIX_REC_MIN_XFER_SIZE) || (POSIX_REC_INCR_XFER_SIZE > POSIX_REC_MAX_XFER_SIZE)
#error "PIPE_BUF must >= POSIX_REC_MIN_XFER_SIZE && <= POSIX_REC_MAX_XFER_SIZE"
#endif

#ifndef POSIX_REC_MAX_XFER_SIZE
#error "not define POSIX_REC_MAX_XFER_SIZE"
#elif POSIX_REC_MAX_XFER_SIZE < POSIX_REC_MIN_XFER_SIZE
#error "POSIX_REC_MAX_XFER_SIZE must >= POSIX_REC_MIN_XFER_SIZE"
#endif

#ifndef POSIX_REC_MIN_XFER_SIZE
#error "not define POSIX_REC_MIN_XFER_SIZE"
#elif POSIX_REC_MIN_XFER_SIZE > POSIX_REC_MAX_XFER_SIZE
#error "POSIX_REC_MIN_XFER_SIZE must <= POSIX_REC_MAX_XFER_SIZE"
#endif

#ifndef POSIX_REC_XFER_ALIGN
#error "not define POSIX_REC_XFER_ALIGN"
#endif

#ifndef SYMLINK_MAX
#error "not define SYMLINK_MAX"
#elif SYMLINK_MAX < _POSIX_SYMLINK_MAX
#error "SYMLINK_MAX must >= _POSIX_SYMLINK_MAX"
#endif

#ifndef BC_BASE_MAX
#error "not define BC_BASE_MAX"
#elif BC_BASE_MAX < _POSIX2_BC_BASE_MAX
#error "BC_BASE_MAX must >= _POSIX2_BC_BASE_MAX"
#endif

#ifndef BC_DIM_MAX
#error "not define BC_DIM_MAX"
#elif BC_DIM_MAX < _POSIX2_BC_DIM_MAX
#error "BC_DIM_MAX must >= _POSIX2_BC_DIM_MAX"
#endif

#ifndef BC_SCALE_MAX
#error "not define BC_SCALE_MAX"
#elif BC_SCALE_MAX < _POSIX2_BC_SCALE_MAX
#error "BC_SCALE_MAX must >= _POSIX2_BC_SCALE_MAX"
#endif

#ifndef BC_STRING_MAX
#error "not define BC_STRING_MAX"
#elif BC_STRING_MAX < _POSIX2_BC_STRING_MAX
#error "BC_STRING_MAX must >= _POSIX2_BC_STRING_MAX"
#endif

#ifndef CHARCLASS_NAME_MAX
#error "not define CHARCLASS_NAME_MAX"
#elif CHARCLASS_NAME_MAX < _POSIX2_CHARCLASS_NAME_MAX
#error "CHARCLASS_NAME_MAX must >= _POSIX2_CHARCLASS_NAME_MAX"
#endif

#ifndef COLL_WEIGHTS_MAX
#error "not define COLL_WEIGHTS_MAX"
#elif COLL_WEIGHTS_MAX < _POSIX2_COLL_WEIGHTS_MAX
#error "COLL_WEIGHTS_MAX must >= _POSIX2_COLL_WEIGHTS_MAX"
#endif

#ifndef EXPR_NEST_MAX
#error "not define EXPR_NEST_MAX"
#elif EXPR_NEST_MAX < _POSIX2_EXPR_NEST_MAX
#error "EXPR_NEST_MAX must >= _POSIX2_EXPR_NEST_MAX"
#endif

#ifndef LINE_MAX
#error "not define LINE_MAX"
#elif LINE_MAX < _POSIX2_LINE_MAX
#error "LINE_MAX must >= _POSIX2_LINE_MAX"
#endif

#ifndef NGROUPS_MAX
#error "not define NGROUPS_MAX"
#elif NGROUPS_MAX < _POSIX_NGROUPS_MAX
#error "NGROUPS_MAX must >= _POSIX_NGROUPS_MAX"
#endif

#ifndef RE_DUP_MAX
#error "not define RE_DUP_MAX"
#elif RE_DUP_MAX < _POSIX2_RE_DUP_MAX
#error "RE_DUP_MAX must >= _POSIX2_RE_DUP_MAX"
#endif

#ifndef _POSIX_CLOCKRES_MIN
#error "not define RE_DUP_MAX"
#elif _POSIX_CLOCKRES_MIN != 20000000UL
#error "_POSIX_CLOCKRES_MIN must == 20000000UL"
#endif

#ifndef _POSIX_AIO_LISTIO_MAX
#error "not define _POSIX_AIO_LISTIO_MAX"
#elif _POSIX_AIO_LISTIO_MAX != 2
#error "_POSIX_AIO_LISTIO_MAX must == 2"
#endif

#ifndef _POSIX_AIO_MAX
#error "not define _POSIX_AIO_MAX"
#elif _POSIX_AIO_MAX != 1
#error "_POSIX_AIO_MAX must == 1"
#endif

#ifndef _POSIX_ARG_MAX
#error "not define _POSIX_ARG_MAX"
#elif _POSIX_ARG_MAX != 4096
#error "_POSIX_ARG_MAX must == 4096"
#endif

#ifndef _POSIX_CHILD_MAX
#error "not define _POSIX_CHILD_MAX"
#elif _POSIX_CHILD_MAX != 25
#error "_POSIX_CHILD_MAX must == 25"
#endif

#ifndef _POSIX_DELAYTIMER_MAX   (32)
#error "not define _POSIX_DELAYTIMER_MAX"
#elif _POSIX_DELAYTIMER_MAX != 32
#error "_POSIX_DELAYTIMER_MAX must == 32"
#endif

#ifndef _POSIX_HOST_NAME_MAX    (255)
#error "not define _POSIX_HOST_NAME_MAX"
#elif _POSIX_HOST_NAME_MAX != 255
#error "_POSIX_HOST_NAME_MAX must == 255"
#endif

#ifndef _POSIX_LINK_MAX         (8)
#error "not define _POSIX_LINK_MAX"
#elif _POSIX_LINK_MAX != 8
#error "_POSIX_LINK_MAX must == 8"
#endif

#ifndef _POSIX_LOGIN_NAME_MAX   (9)
#error "not define _POSIX_LOGIN_NAME_MAX"
#elif _POSIX_LOGIN_NAME_MAX != 9
#error "_POSIX_LOGIN_NAME_MAX must == 9"
#endif

#ifndef _POSIX_MAX_CANON        (255)
#error "not define _POSIX_MAX_CANON"
#elif _POSIX_MAX_CANON != 255
#error "_POSIX_MAX_CANON must == 255"
#endif

#ifndef _POSIX_MAX_INPUT        (255)
#error "not define _POSIX_MAX_INPUT"
#elif _POSIX_MAX_INPUT != 255
#error "_POSIX_MAX_INPUT must == 255"
#endif

#ifndef _POSIX_MQ_OPEN_MAX      (8)
#error "not define _POSIX_MQ_OPEN_MAX"
#elif _POSIX_MQ_OPEN_MAX != 8
#error "_POSIX_MQ_OPEN_MAX must == 8"
#endif

#ifndef _POSIX_MQ_PRIO_MAX      (32)
#error "not define _POSIX_MQ_PRIO_MAX"
#elif _POSIX_MQ_PRIO_MAX != 32
#error "_POSIX_MQ_PRIO_MAX must == 32"
#endif

#ifndef _POSIX_NAME_MAX         (14)
#error "not define _POSIX_NAME_MAX"
#elif _POSIX_NAME_MAX != 14
#error "_POSIX_NAME_MAX must == 14"
#endif

#ifndef _POSIX_NGROUPS_MAX      (8)
#error "not define _POSIX_NGROUPS_MAX"
#elif _POSIX_NGROUPS_MAX != 8
#error "_POSIX_NGROUPS_MAX must == 8"
#endif

#ifndef _POSIX_OPEN_MAX         (20)
#error "not define _POSIX_OPEN_MAX"
#elif _POSIX_OPEN_MAX != 20
#error "_POSIX_OPEN_MAX must == 20"
#endif

#ifndef _POSIX_PATH_MAX
#error "not define _POSIX_PATH_MAX"
#elif _POSIX_PATH_MAX != 256
#error "_POSIX_OPEN_MAX must == 256"
#endif

#ifndef _POSIX_PIPE_BUF         (512)
#error "not define _POSIX_PIPE_BUF"
#elif _POSIX_PIPE_BUF != 512
#error "_POSIX_PIPE_BUF must == 512"
#endif

#ifndef _POSIX_RE_DUP_MAX       (255)
#error "not define _POSIX_RE_DUP_MAX"
#elif _POSIX_RE_DUP_MAX != 255
#error "_POSIX_RE_DUP_MAX must == 255"
#endif

#ifndef _POSIX_RTSIG_MAX        (8)
#error "not define _POSIX_RTSIG_MAX"
#elif _POSIX_RTSIG_MAX != 8
#error "_POSIX_RTSIG_MAX must == 8"
#endif

#ifndef _POSIX_SEM_NSEMS_MAX    (256)
#error "not define _POSIX_SEM_NSEMS_MAX"
#elif _POSIX_SEM_NSEMS_MAX != 256
#error "_POSIX_SEM_NSEMS_MAX must == 256"
#endif

#ifndef _POSIX_SEM_VALUE_MAX    (32767)
#error "not define _POSIX_SEM_VALUE_MAX"
#elif _POSIX_SEM_VALUE_MAX != 32767
#error "_POSIX_SEM_VALUE_MAX must == 32767"
#endif

#ifndef _POSIX_SIGQUEUE_MAX     (32)
#error "not define _POSIX_SIGQUEUE_MAX"
#elif _POSIX_SIGQUEUE_MAX != 32
#error "_POSIX_SIGQUEUE_MAX must == 32"
#endif

#ifndef _POSIX_SSIZE_MAX        (32767)
#error "not define _POSIX_SSIZE_MAX"
#elif _POSIX_SSIZE_MAX != 32767
#error "_POSIX_SSIZE_MAX must == 32767"
#endif

#ifndef _POSIX_SS_REPL_MAX      (4)
#error "not define _POSIX_SS_REPL_MAX"
#elif _POSIX_SS_REPL_MAX != 4
#error "_POSIX_SSIZE_MAX must == 4"
#endif

#ifndef _POSIX_STREAM_MAX       (8)
#error "not define _POSIX_STREAM_MAX"
#elif _POSIX_STREAM_MAX != 8
#error "_POSIX_STREAM_MAX must == 8"
#endif

#ifndef _POSIX_SYMLINK_MAX      (255)
#error "not define _POSIX_SYMLINK_MAX"
#elif _POSIX_SYMLINK_MAX != 255
#error "_POSIX_SYMLINK_MAX must == 255"
#endif

#ifndef _POSIX_SYMLOOP_MAX      (8)
#error "not define _POSIX_SYMLOOP_MAX"
#elif _POSIX_SYMLOOP_MAX != 8
#error "_POSIX_SYMLOOP_MAX must == 8"
#endif

#ifndef _POSIX_THREAD_DESTRUCTOR_ITERATIONS (4)
#error "not define _POSIX_THREAD_DESTRUCTOR_ITERATIONS"
#elif _POSIX_THREAD_DESTRUCTOR_ITERATIONS != 4
#error "_POSIX_THREAD_DESTRUCTOR_ITERATIONS must == 4"
#endif

#ifndef _POSIX_THREAD_KEYS_MAX  (128)
#error "not define _POSIX_THREAD_KEYS_MAX"
#elif _POSIX_THREAD_KEYS_MAX != 128
#error "_POSIX_THREAD_KEYS_MAX must == 128"
#endif

#ifndef _POSIX_THREAD_THREADS_MAX   (64)
#error "not define _POSIX_THREAD_THREADS_MAX"
#elif _POSIX_THREAD_THREADS_MAX != 64
#error "_POSIX_THREAD_THREADS_MAX must == 64"
#endif

#ifndef _POSIX_TIMER_MAX        (32)
#error "not define _POSIX_TIMER_MAX"
#elif _POSIX_TIMER_MAX != 32
#error "_POSIX_TIMER_MAX must == 32"
#endif

#ifndef _POSIX_TRACE_EVENT_NAME_MAX (30)
#error "not define _POSIX_TRACE_EVENT_NAME_MAX"
#elif _POSIX_TRACE_EVENT_NAME_MAX != 30
#error "_POSIX_TRACE_EVENT_NAME_MAX must == 30"
#endif

#ifndef _POSIX_TRACE_NAME_MAX   (8)
#error "not define _POSIX_TRACE_NAME_MAX"
#elif _POSIX_TRACE_NAME_MAX != 8
#error "_POSIX_TRACE_NAME_MAX must == 8"
#endif

#ifndef _POSIX_TRACE_SYS_MAX    (8)
#error "not define _POSIX_TRACE_SYS_MAX"
#elif _POSIX_TRACE_SYS_MAX != 8
#error "_POSIX_TRACE_SYS_MAX must == 8"
#endif

#ifndef _POSIX_TRACE_USER_EVENT_MAX (32)
#error "not define _POSIX_TRACE_USER_EVENT_MAX"
#elif _POSIX_TRACE_USER_EVENT_MAX != 32
#error "_POSIX_TRACE_USER_EVENT_MAX must == 32"
#endif

#ifndef _POSIX_TTY_NAME_MAX     (9)
#error "not define _POSIX_TTY_NAME_MAX"
#elif _POSIX_TTY_NAME_MAX != 9
#error "_POSIX_TTY_NAME_MAX must == 9"
#endif

#ifndef _POSIX_TZNAME_MAX       (6)
#error "not define _POSIX_TZNAME_MAX"
#elif _POSIX_TZNAME_MAX != 6
#error "_POSIX_TZNAME_MAX must == 6"
#endif

#ifndef _POSIX2_BC_BASE_MAX     (99)
#error "not define _POSIX2_BC_BASE_MAX"
#elif _POSIX2_BC_BASE_MAX != 99
#error "_POSIX2_BC_BASE_MAX must == 99"
#endif

#ifndef _POSIX2_BC_DIM_MAX      (2048)
#error "not define _POSIX2_BC_DIM_MAX"
#elif _POSIX2_BC_DIM_MAX != 2048
#error "_POSIX2_BC_DIM_MAX must == 2048"
#endif

#ifndef _POSIX2_BC_SCALE_MAX    (99)
#error "not define _POSIX2_BC_SCALE_MAX"
#elif _POSIX2_BC_SCALE_MAX != 99
#error "_POSIX2_BC_SCALE_MAX must == 99"
#endif

#ifndef _POSIX2_BC_STRING_MAX   (1000)
#error "not define _POSIX2_BC_STRING_MAX"
#elif _POSIX2_BC_STRING_MAX != 1000
#error "_POSIX2_BC_STRING_MAX must == 1000"
#endif

#ifndef _POSIX2_CHARCLASS_NAME_MAX  (14)
#error "not define _POSIX2_CHARCLASS_NAME_MAX"
#elif _POSIX2_CHARCLASS_NAME_MAX != 14
#error "_POSIX2_CHARCLASS_NAME_MAX must == 14"
#endif

#ifndef _POSIX2_COLL_WEIGHTS_MAX    (2)
#error "not define _POSIX2_COLL_WEIGHTS_MAX"
#elif _POSIX2_COLL_WEIGHTS_MAX != 2
#error "_POSIX2_COLL_WEIGHTS_MAX must == 2"
#endif

#ifndef _POSIX2_EXPR_NEST_MAX       (32)
#error "not define _POSIX2_EXPR_NEST_MAX"
#elif _POSIX2_EXPR_NEST_MAX != 32
#error "_POSIX2_EXPR_NEST_MAX must == 32"
#endif

#ifndef _POSIX2_LINE_MAX        (2048)
#error "not define _POSIX2_LINE_MAX"
#elif _POSIX2_LINE_MAX != 2048
#error "_POSIX2_LINE_MAX must == 2048"
#endif

#ifndef _POSIX2_RE_DUP_MAX      (255)
#error "not define _POSIX2_RE_DUP_MAX"
#elif _POSIX2_RE_DUP_MAX != 255
#error "_POSIX2_RE_DUP_MAX must == 255"
#endif

#ifndef _XOPEN_IOV_MAX          (16)
#error "not define _XOPEN_IOV_MAX"
#elif _XOPEN_IOV_MAX != 16
#error "_XOPEN_IOV_MAX must == 16"
#endif

#ifndef _XOPEN_NAME_MAX         (255)
#error "not define _XOPEN_NAME_MAX"
#elif _XOPEN_NAME_MAX != 255
#error "_XOPEN_NAME_MAX must == 255"
#endif

#ifndef _XOPEN_PATH_MAX         (1024)
#error "not define _XOPEN_PATH_MAX"
#elif _XOPEN_PATH_MAX != 1024
#error "_XOPEN_PATH_MAX must == 1024"
#endif

#ifndef CHAR_BIT        (8)
#error "not define CHAR_BIT"
#elif CHAR_BIT != 8
#error "CHAR_BIT must == 8"
#endif

#ifndef CHAR_MAX        UCHAR_MAX
#error "not define CHAR_MAX"
#elif CHAR_MAX != UCHAR_MAX && CHAR_MAX !=  SCHAR_MAX
#error "CHAR_MAX must == UCHAR_MAX or SCHAR_MAX"
#endif

#ifndef CHAR_MIN        (0)
#error "not define CHAR_MIN"
#elif CHAR_MIN != SCHAR_MIN && CHAR_MIN !=  0
#error "CHAR_MAX must == SCHAR_MIN or 0"
#endif

#ifndef INT_MAX         (2147483647)
#error "not define INT_MAX"
#elif INT_MAX < 2147483647
#error "INT_MAX must >= 2147483647"
#endif

#ifndef INT_MIN         (−2147483647)
#error "not define INT_MIN"
#elif INT_MIN > (-2147483647)
#error "INT_MIN must <= -2147483647"
#endif

#ifndef LLONG_MAX       (9223372036854775807)
#error "not define LLONG_MAX"
#elif LLONG_MAX < 9223372036854775807
#error "LLONG_MAX must >= 9223372036854775807"
#endif

#ifndef LLONG_MIN       (-9223372036854775807)
#error "not define LLONG_MIN"
#elif LLONG_MIN > (-9223372036854775807)
#error "LLONG_MIN must <= -9223372036854775807"
#endif

#ifndef LONG_BIT        (32)
#error "not define LONG_BIT"
#else
static_assert((LONG_BIT == (sizeof(long) * 8)), "LONG_BIT error");
#endif

#ifndef LONG_MAX        (2147483647)
#error "not define LONG_MAX"
#elif LONG_BIT == 32
#if LONG_MAX < 2147483647
#error "LONG_MAX must >= 2147483647"
#endif
#else
#if LONG_MAX < 9223372036854775807
#error "LONG_MAX must >= 9223372036854775807"
#endif
#endif

#ifndef LONG_MIN         (−2147483647)
#error "not define LLONG_MAX"
#elif LONG_BIT == 32
#if LONG_MIN < -2147483647
#error "LONG_MIN must <= -2147483647"
#endif
#else
#if LONG_MIN > -9223372036854775807
#error "LONG_MIN must <= 9223372036854775807"
#endif
#endif

#ifndef MB_LEN_MAX      (1)
#error "not define MB_LEN_MAX"
#elif MB_LEN_MAX < 1
#error "MB_LEN_MAX must >= 1"
#endif

#ifndef SCHAR_MAX       (127)
#error "not define SCHAR_MAX"
#elif SCHAR_MAX != 127
#error "SCHAR_MAX must == 127"
#endif

#ifndef SCHAR_MIN       (-128)
#error "not define SCHAR_MIN"
#elif SCHAR_MIN != -128
#error "SCHAR_MIN must == -128"
#endif

#ifndef SHRT_MAX        (32767)
#error "not define SCHAR_MAX"
#elif SCHAR_MAX < 127
#error "SCHAR_MAX must >= 127"
#endif

#ifndef SHRT_MIN        (-32767)
#error "not define SHRT_MIN"
#elif SHRT_MIN > (-32767)
#error "SHRT_MIN must <= -32767"
#endif

#ifndef SSIZE_MAX       _POSIX_SSIZE_MAX
#error "not define SSIZE_MAX"
#elif SSIZE_MAX < _POSIX_SSIZE_MAX
#error "SSIZE_MAX must >= _POSIX_SSIZE_MAX"
#endif

#ifndef UCHAR_MAX       (255U)
#error "not define UCHAR_MAX"
#elif UCHAR_MAX != 255
#error "UCHAR_MAX must == 255"
#endif

#ifndef UINT_MAX        (4294967295U)
#error "not define UINT_MAX"
#elif UINT_MAX < 4294967295U
#error "UINT_MAX must >= 4294967295"
#endif

#ifndef ULLONG_MAX      (18446744073709551615ULL)
#error "not define ULLONG_MAX"
#elif ULLONG_MAX < 4294967295U
#error "ULLONG_MAX must >= 18446744073709551615"
#endif

#ifndef ULONG_MAX       (4294967295U)
#error "not define ULONG_MAX"
#elif LONG_BIT == 32
#if ULONG_MAX < 4294967295U
#error "ULONG_MAX must >= 4294967295"
#endif
#else
#if ULONG_MAX < 18446744073709551615ULL
#error "ULONG_MAX must >= 18446744073709551615"
#endif
#endif

#ifndef USHRT_MAX       (65535)
#error "not define USHRT_MAX"
#elif USHRT_MAX < 65535
#error "USHRT_MAX must >= 65535"
#endif

#ifndef WORD_BIT
#error "not define WORD_BIT"
#elif WORD_BIT != 32
#error "WORD_BIT must != 32"
#endif

#ifndef NL_ARGMAX   (9)
#error "not define NL_ARGMAX"
#elif NL_ARGMAX < 9
#error "NL_ARGMAX must >= 9"
#endif

#ifndef NL_LANGMAX  (14)
#error "not define NL_LANGMAX"
#elif NL_LANGMAX < 14
#error "NL_LANGMAX must >= 14"
#endif

#ifndef NL_MSGMAX   (32767)
#error "not define NL_MSGMAX"
#elif NL_MSGMAX < 32767
#error "NL_MSGMAX must >= 32767"
#endif

#ifndef NL_SETMAX   (255)
#error "not define NL_SETMAX"
#elif NL_SETMAX < 255
#error "NL_SETMAX must >= 255"
#endif

#ifndef NL_TEXTMAX  (_POSIX2_LINE_MAX)
#error "not define NL_TEXTMAX"
#elif NL_TEXTMAX < _POSIX2_LINE_MAX
#error "NL_TEXTMAX must >= _POSIX2_LINE_MAX"
#endif

#ifndef NZERO   (20)
#error "not define NZERO"
#elif NZERO < 20
#error "NZERO must >= 20"
#endif
