#ifndef HEADER_COMMUNICATION
#define HEADER_COMMUNICATION
#include <stdio.h>
#include <stdbool.h>
#include "status.h"
#include "error.h"
#include "accountInfo.h"
#include "pin.h"

bool connection_pin_verification(int pin_no);
bool connection_get_balance();
bool connection_get_deposit();
bool connection_get_withdraw();
#endif //HEADER_COMMUNICATION