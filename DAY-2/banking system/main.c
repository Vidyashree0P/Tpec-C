#include <stdio.h>
#include "user.h"

int main() {
    int choice;

    while (1) {
        printf("\nSelect an option:\n");
        printf("1. Create User\n");
        printf("2. Delete User\n");
        printf("3. Credit Money\n");
        printf("4. Debit Money\n");
        printf("5. Transfer Money\n");
        printf("6. Display All Users\n");
        printf("7. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:{printf("create user");
                createUser();
            }
                break;
            case 2:{printf("delete user");
                deleteUser();}
                break;
            case 3:{printf("credit money");
                creditMoney();}
                break;
            case 4:{printf("debit money");
                debitMoney();}
                break;
            case 5:{printf("transfer money");
                transferMoney();}
                break;
            case 6:{printf("display all user");
                displayUsers();}
                break;
            case 7:
                return 0;
            default:
                printf("Invalid choice. Please select a valid option.\n");
        }
    }

    return 0;
}
