#include <stdio.h>
#include <stdlib.h>

#define SIZE 10

int main() {
    char groceries[SIZE][50]; // Array to store grocery names
    FILE *file;

    // Open a file to write the grocery items
    file = fopen("groceries.txt", "w");
    if (file == NULL) {
        printf("Error opening file for writing!\n");
        exit(1);
    }

    printf("Enter %d grocery items:\n", SIZE);

    // Input grocery items and write to the file
    for (int i = 0; i < SIZE; i++) {
        printf("Item %d: ", i + 1);
        scanf(" %[^\n]", groceries[i]); // To allow space-separated inputs
        fprintf(file, "%s\n", groceries[i]); // Write to file
    }

    fclose(file); // Close the file after writing
    printf("\nGrocery items saved to 'groceries.txt'.\n");

    // Open the file to read the grocery items
    file = fopen("groceries.txt", "r");
    if (file == NULL) {
        printf("Error opening file for reading!\n");
        exit(1);
    }

    printf("\nYour Grocery List (Read from file):\n");
    char item[50];
    int count = 1;

    // Read and display items from the file
    while (fgets(item, sizeof(item), file) != NULL) {
        printf("%d. %s", count, item); // 'fgets' includes the newline character
        count++;
    }

    fclose(file); // Close the file after reading
    return 0;
}
