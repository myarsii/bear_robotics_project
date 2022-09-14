#include <stdio.h>
#include <stdbool.h>

#include "userInfo.h"
#include "communication.h"

void show_idle_screen(){
    // Implement idle screen display
}

int show_input_pin_screen(){
    // Implement pin screen display
    // return pin number
    return 1234;
}

void show_balance_screen(){
    connection_get_balance();
    // Implement balance screen display
}

void show_deposit_screen(){
    connection_get_deposit();
    // Implement deposit screen display
}

void show_withdraw_screen(){
    connection_get_withdraw();
    // Implement balance screen display
}