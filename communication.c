#include "communication.h"

char* name;
char *email;

//pin verification
bool connection_pin_verification(int pin_no){
    bool success;
    // Implementation pin check through network
    // eg name, email
    if (success) {
        set_accountInfo(name, email);
    } else {
        set_accountInfo(0, 0);
    }
    return success;
}

//get balance
bool connection_get_balance(){
    bool success;
    // Implementation pin check through network with account info
    if (success) {
        //show screen
    } else {
        set_error(ERROR_GET_BALANCE_ERROR);
    }
    return success;
}

//get deposit
bool connection_get_deposit(){
    bool success;
    // Implementation pin check through network with account info
    if (success) {
        //show screen
    } else {
        set_error(ERROR_GET_DEPOSIT_ERROR);
    }
    return success;
}

//get withdraw
bool connection_get_withdraw(){
    bool success;
    // Implementation pin check through network with account info
    if (success) {
        //show screen
    } else {
        set_error(ERROR_GET_BALANCE_ERROR);
    }
    return success;
}
