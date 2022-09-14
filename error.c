#include <stdio.h>
#include <stdbool.h>

#include "error.h"

ERROR error_type;

void set_error(ERROR e) {
    error_type = e;
}

ERROR get_error() {
    return error_type;
}