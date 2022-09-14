#ifndef HEADER_PIN
#define HEADER_PIN
#include <stdio.h>
#include <stdbool.h>
#include "status.h"
#include "error.h"
#include "communication.h"

void clear_pin(int in_pin);
void set_pin(int in_pin);
int get_pin(int in_pin);
bool verify_pin();

#endif //HEADER_PIN