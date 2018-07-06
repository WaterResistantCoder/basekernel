#ifndef KERNEL_ERROR_H
#define KERNEL_ERROR_H

#include "kernel/types.h"

typedef enum {
        KERROR_NOT_FOUND = -1,
        KERROR_INVALID_REQUEST = -2,
        KERROR_PERMISSION_DENIED = -3,
        KERROR_NOT_IMPLEMENTED = -4,
        KERROR_NOT_EXECUTABLE = -5,
        KERROR_EXECUTION_FAILED = -6,
        KERROR_NOT_SUPPORTED = -7,
        KERROR_NOT_A_DIRECTORY = -8,
        KERROR_NOT_A_FILE = -9,
        KERROR_NOT_A_WINDOW = -10,
        KERROR_NOT_A_DEVICE = -11,
	KERROR_NO_MEMORY = -12,
	KERROR_IO_FAILURE = -13,
} kernel_error_t;

#endif
