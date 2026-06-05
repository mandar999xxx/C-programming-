/**
 * Module: Module 3 (Arrays and Strings)
 * Problem: Alphabetical Name Sorter
 * 
 * Description:
 * This program reads 'n' names from the user, stores them in a 2D char array, 
 * and sorts them alphabetically in ascending order using the Bubble Sort 
 * algorithm with strcmp() and strcpy() helper functions.
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

    // Bubble sort logic to arrange names alphabetically
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            // If the current name is alphabetically larger than next name, swap them
            if (strcmp(names[j], names[j + 1]) > 0) {
                strcpy(temp, names[j]);
                strcpy(names[j], names[j + 1]);
                strcpy(names[j + 1], temp);
            }
        }
    }

    // Display sorted names
    printf("\nNames in alphabetical order:\n");
    for (i = 0; i < n; i++) {
        printf("%s\n", names[i]);
    }

    return 0;
}
