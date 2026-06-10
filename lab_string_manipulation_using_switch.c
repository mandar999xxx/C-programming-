/**
 * Module: Lab Programs
 * Problem: 3. String manipulation using switch
 * 
 * Description:
 * This program performs length calculation, comparison, copying, and 
 * concatenation on strings using standard string functions and a switch statement.
 */

#include <stdio.h>
#include <string.h>

int main()
{
    int len1, len2, choice;
    char str1[200], str2[100]; // Increased str1 size to prevent overflow on concatenation

    printf("String manipulation function\n");
    printf("1 Length of a string\n");
    printf("2 Comparing two string\n");
    printf("3 Copying string\n");
    printf("4 Concatenating strings\n");
    printf("Enter two strings\n");
    if (scanf("%99s %99s", str1, str2) != 2) {
        printf("Error reading strings.\n");
        return 1;
    }

    printf("Enter the choice\n");
    if (scanf("%d", &choice) != 1) {
        printf("Error reading choice.\n");
        return 1;
    }

    switch (choice)
    {
        case 1:
            len1 = strlen(str1);
            len2 = strlen(str2);
            printf("Length of first string: %d\n", len1);
            printf("Length of second string: %d\n", len2);
            break;
        case 2:
            if (strcmp(str1, str2) == 0)
                printf("Strings are equal\n");
            else
                printf("Strings are not equal\n");
            break;
        case 3:
            strcpy(str1, str2);
            printf("After copying, first string: %s\n", str1);
            break;
        case 4:
            strcat(str1, str2);
            printf("After concatenation: %s\n", str1);
            break;
        default:
            printf("Invalid choice\n");
    }

    return 0;
}
