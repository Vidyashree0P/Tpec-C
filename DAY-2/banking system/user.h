
#ifndef USER_H
#define USER_H

#define MAX_USERS 100

typedef struct {
    int id;
    char name[50];
    float balance;
} User;

extern User users[MAX_USERS];
extern int userCount;

void createUser();
void deleteUser();
void creditMoney();
void debitMoney();
void transferMoney();
void displayUsers();

#endif
