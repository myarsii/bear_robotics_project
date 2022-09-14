#include <stdio.h>
#include <stdbool.h>

#include "accountInfo.h"

accountInfo account;

void set_accountInfo(char *name, char *email) {
    account.name = name;
    account.email = email;
}

accountInfo get_accountInfo() {
    return account;
}

char *get_accountName(){
    return account.name;
}

char *get_accountEmail(){
    return account.email;
}
