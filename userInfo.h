#ifndef HEADER_USERINFO
#define HEADER_USERINFO
#include <stdbool.h>
#include "accountInfo.h"

typedef struct _userInfo
{
    int card_number;
    bool pin_checked;
    accountInfo* selected_account;
}userInfo;

void set_card_number(int no);
int get_card_number();
void set_pin_checked(bool checked);
bool get_pin_checked();
void set_userInfo(userInfo user_info);
userInfo get_userInfo();

#endif //HEADER_USERINFO