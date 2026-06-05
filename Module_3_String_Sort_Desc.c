/**
 * Module: Module 3 (Arrays and Strings)
 * Problem: Reverse Alphabetical Name Sorter
 * 
 * Description:
 * This program reads 'n' names from the user and sorts them in reverse 
 * alphabetical order (Z to A) using the Bubble Sort algorithm.
 */

#include <stdio.h>
#include <string.h>

int main() {
    char names[50][50], temp[50];
    int n, i, j;

    // Prompt user for number of names
    printf("Enter the number of names: ");
    if (scanf("%d", &n) != 1 || n < 1 || n > 50) {
        printf("Error: Number of names must be between 1 and 50.\n");
        return 1;
    }

    // Read names
    printf("Enter %d names:\n", n);
    for (i = 0; i < n; i++) {
        printf("Name %d: ", i + 1);
        scanf("%49s", names[i]);
    }

    // Bubble sort logic to arrange names in reverse alphabetical order
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            // If current name is alphabetically smaller than next, swap them
            if (strcmp(names[j], names[j + 1]) < 0) {
                strcpy(temp, names[j]);
                strcpy(names[j], names[j + 1]);
                strcpy(names[j + 1], temp);
            }
        }
    }

    // Display sorted names
    printf("\nNames in reverse alphabetical order:\n");
    for (i = 0; i < n; i++) {
        printf("%s\n", names[i]);
    }

    return 0;
}
