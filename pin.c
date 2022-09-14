#include "pin.h"

int pin;

void clear_pin(int in_pin){
    pin = 0;
}

void set_pin(int in_pin){
    pin = in_pin;
}

int get_pin(int in_pin) {
    return pin;
}

bool verify_pin(){
    set_status(STATUS_PIN_CHECKING);

    if(connection_pin_verification(pin)){
        set_status(STATUS_PIN_CHECKING_SUCCESS);
        return true;
    } else {
        set_status(STATUS_PIN_CHECKING_ERROR);
        set_error(ERROR_PIN_VERIFICATION_FAIL);
        return false;
    }
}