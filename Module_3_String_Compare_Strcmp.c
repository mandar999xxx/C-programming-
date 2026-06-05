/**
 * Module: Module 3 (Arrays and Strings)
 * Problem: String Comparison using strcmp()
 * 
 * Description:
 * This program reads two strings from the user and compares them using 
 * the standard library function strcmp() from <string.h>.
 */

#include <stdio.h>
#include <string.h>

int main() {
    char str1[50], str2[50];
    int result;

    // Prompt for string 1
    printf("Enter string 1: ");
    // Limit input length to 49 to prevent buffer overflow
    scanf("%49s", str1);

    // Prompt for string 2
    printf("Enter string 2: ");
    scanf("%49s", str2);

    // Compare using strcmp
    // strcmp returns 0 if strings are identical
    result = strcmp(str1, str2);

    if (result == 0) {
        printf("Strings are same\n");
    } else {
        printf("Strings are different (strcmp returned %d)\n", result);
    }

    return 0;
}
