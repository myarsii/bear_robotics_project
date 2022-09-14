#include <stdio.h>
#include <stdbool.h>

#include "status.h"

STATUS current_status;

void set_status(STATUS s) {
    current_status = s;
}

STATUS get_status() {
    return current_status;
}
