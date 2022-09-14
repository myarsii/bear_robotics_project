#include <stdio.h>
#include <stdbool.h>

#include "status.h"
#include "error.h"
#include "screen.h"
#include "userInfo.h"
#include "pin.h"

int test_status[5] = {
    STATUS_IDLE,
    STATUS_PIN_INPUT,
    STATUS_DISPLAY_BALANCE,
    STATUS_DISPLAY_DEPOSIT,
    STATUS_DISPLAY_WITHDRAW};

void do_job_as_status() {
    switch (get_status()) {
        case STATUS_IDLE:
            show_idle_screen();
            break;
        case STATUS_CARD_DETECTING:
            break;
        case STATUS_CARD_READING:
            break;
        case STATUS_CARD_READING_ERROR:
            break;
        case STATUS_CARD_READING_DONE:
            set_status(STATUS_PIN_INPUT);
            break;
        case STATUS_PIN_INPUT:
            {
                int pin = 0;
                pin = show_input_pin_screen();
                if (pin) {
                    set_pin(pin);
                    verify_pin();
                }
                else {
                    set_status(STATUS_PIN_INPUT);
                }
            }
            break;
        case STATUS_PIN_CHECKING:
            break;
        case STATUS_PIN_CHECKING_ERROR:
            break;
        case STATUS_PIN_CHECKING_SUCCESS:
            set_status(STATUS_DISPLAY_BALANCE);
            break;
        case STATUS_DISPLAY_BALANCE:
            show_balance_screen();
            break;
        case STATUS_DISPLAY_DEPOSIT:
            show_deposit_screen();
            break;
        case STATUS_DISPLAY_WITHDRAW:
            show_withdraw_screen();
            break;
        case STATUS_FINISH_ACTION:
            break;
        case STATUS_FINISH_ACTION_CARD_REMOVE:
            break;
        default:
            set_error(ERROR_SHUTDOWN);
            break;
    };
}

int main() {
    printf("ATM Test project\n");

    for (int i = 0; i < 5; i++) {
        set_error(ERROR_NONE);
        set_status(test_status[i]);
        do_job_as_status();
        if (get_error() == ERROR_NONE) {
            printf("test case [%d] passed!!\n", i);
        } else {
            printf("test case [%d] failed!! err_code = %d\n", i, get_error());
        }
    }

    return 0;
}