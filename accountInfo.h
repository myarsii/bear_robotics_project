#ifndef HEADER_ACCOUNTINFO
#define HEADER_ACCOUNTINFO

typedef struct _accountInfo
{
    char* name;
    char* email;
}accountInfo;

void set_accountInfo(char *name, char *email);
accountInfo get_accountInfo();
char *get_accountName();
char *get_accountEmail();

#endif //HEADER_ACCOUNTINFO