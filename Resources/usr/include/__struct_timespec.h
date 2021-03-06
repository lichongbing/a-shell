#ifndef __wasm_basics___struct_timespec_h
#define __wasm_basics___struct_timespec_h

#include <__typedef_time_t.h>

/* As specified in POSIX. */
struct timespec {
    time_t tv_sec;
    long tv_nsec;
};

#endif
