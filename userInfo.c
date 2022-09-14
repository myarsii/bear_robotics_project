#include <stdio.h>

#include "userInfo.h"

userInfo info;

void set_card_number (int no) {
    info.card_number = no;
}

int get_card_number () {
    return info.card_number;
}

void set_pin_checked (bool checked) {
    info.pin_checked = checked;
}

bool get_pin_checked () {
    return info.pin_checked;
}

void set_userInfo (userInfo user_info) {
    info = user_info;
}

userInfo get_userInfo () {
    return info;
}
