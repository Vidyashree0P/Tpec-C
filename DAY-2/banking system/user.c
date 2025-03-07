
#include <stdio.h>
#include <string.h>
#include "user.h"

User users[MAX_USERS];
int userCount = 0;

void createUser() {
    if (userCount >= MAX_USERS) {
        printf("User limit reached. Cannot create more users.\n");
        return;
    }

    User newUser;
    newUser.id = userCount + 1;

    printf("Enter user name: ");
    scanf("%s", newUser.name);

    printf("Enter initial balance: ");
    scanf("%f", &newUser.balance);


    userCount++;
    printf("User created successfully. ID: %d\n", newUser.id);
}

void deleteUser() {
    int id;
    printf("Enter user ID to delete: ");
    scanf("%d", &id);

    for (int i = 0; i < userCount; i++) {
        if (users[i].id == id) {
            for (int j = i; j < userCount - 1; j++) {
                users[j] = users[j + 1];
            }
            userCount--;
            printf("User deleted successfully.\n");
            return;
        }
    }
    printf("User ID not found.\n");
}

void creditMoney() {
    int id;
    float amount;

    printf("Enter user ID to credit money: ");
    scanf("%d", &id);
    printf("Enter amount to credit: ");
    scanf("%f", &amount);

    for (int i = 0; i < userCount; i++) {
        if (users[i].id == id) {
            users[i].balance += amount;
            printf("Amount credited successfully. New balance: %.2f\n", users[i].balance);
            return;
        }
    }
    printf("User ID not found.\n");
}

void debitMoney() {
    int id;
    float amount;

    printf("Enter user ID to debit money: ");
    scanf("%d", &id);
    printf("Enter amount to debit: ");
    scanf("%f", &amount);

    for (int i = 0; i < userCount; i++) {
        if (users[i].id == id) {
            if (users[i].balance >= amount) {
                users[i].balance -= amount;
                printf("Amount debited successfully. New balance: %.2f\n", users[i].balance);
            } else {
                printf("Insufficient balance.\n");
            }
            return;
        }
    }
    printf("User ID not found.\n");
}

void transferMoney() {
    int fromId, toId;
    float amount;

    printf("Enter user ID to transfer money from: ");
    scanf("%d", &fromId);
    printf("Enter user ID to transfer money to: ");
    scanf("%d", &toId);
    printf("Enter amount to transfer: ");
    scanf("%f", &amount);

    User *fromUser = NULL;
    User *toUser = NULL;

    for (int i = 0; i < userCount; i++) {
        if (users[i].id == fromId) {
            fromUser = &users[i];
        }
        if (users[i].id == toId) {
            toUser = &users[i];
        }
    }

    if (fromUser && toUser) {
        if (fromUser->balance >= amount) {
            fromUser->balance -= amount;
            toUser->balance += amount;
            printf("Amount transferred successfully. New balance of User %d: %.2f\n", fromId, fromUser->balance);
            printf("New balance of User %d: %.2f\n", toId, toUser->balance);
        } else {
            printf("Insufficient balance in User %d's account.\n", fromId);
        }
    } else {
        printf("One or both User IDs not found.\n");
    }
}

void displayUsers() {
    if (userCount == 0) {
        printf("No users found.\n");
        return;
    }

    printf("\nUser Details:\n");
    printf("ID\tName\tBalance\n");
    for (int i = 0; i < userCount; i++) {
        printf("%d\t%s\t%.2f\n", users[i].id, users[i].name, users[i].balance);
    }
}
