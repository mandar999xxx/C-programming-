/**
 * Module: Module 3 (Arrays and Strings)
 * Problem: Menu-Driven String Operations
 * 
 * Description:
 * This program displays a menu of 4 string operations (Length, Compare, Copy, Concatenate).
 * It reads two strings and the user's choice, then executes the selected operation 
 * using standard string functions inside a switch-case statement.
 */

#include <stdio.h>
#include <string.h>

int main() {
    int len1, len2, choice, k;
    char str1[100], str2[50]; // str1 needs extra space for case 4 (concatenate)

    printf("--- String Manipulation Menu ---\n");
    printf("1. Length of strings\n");
    printf("2. Compare 2 Strings\n");
    printf("3. Copy string1 to string2\n");
    printf("4. Concatenate strings (string2 to string1)\n");
    
    printf("\nEnter 2 strings:\n");
    printf("String 1: ");
    scanf("%49s", str1);
    printf("String 2: ");
    scanf("%49s", str2);

    printf("\nEnter your choice (1-4): ");
    if (scanf("%d", &choice) != 1) {
        printf("Error: Invalid choice.\n");
        return 1;
    }

    switch (choice) {
        case 1:
            len1 = strlen(str1);
            len2 = strlen(str2);
            printf("Length of string1 is %d\n", len1);
            printf("Length of string2 is %d\n", len2);
            break;

        case 2:
            k = strcmp(str1, str2);
            if (k == 0) {
                printf("Strings are same\n");
            } else {
                printf("Strings are different\n");
            }
            break;

        case 3:
            strcpy(str2, str1);
            printf("After copying, string2 contains: %s\n", str2);
            break;

        case 4:
            strcat(str1, str2);
            printf("The concatenated string is %s\n", str1);
            break;

        default:
            printf("Invalid choice!\n");
            break;
    }

    return 0;
}
