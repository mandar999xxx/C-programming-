/**
 * Module: Module 3 (Arrays and Strings)
 * Problem: String Comparison without built-in functions
 * 
 * Description:
 * This program compares two strings character by character using a while loop.
 * It does not use strlen() or strcmp(). It checks for mismatch or terminal nulls.
 */

#include <stdio.h>

int main() {
    char str1[50], str2[50];
    int i = 0, flag = 0;

    // Prompt user for input
    printf("Enter string 1: ");
    scanf("%49s", str1);

    printf("Enter string 2: ");
    scanf("%49s", str2);

    // Compare character by character until mismatch or terminal null is hit
    while (str1[i] != '\0' || str2[i] != '\0') {
        if (str1[i] != str2[i]) {
            flag = 1; // Mismatch found
            break;
        }
        i++;
    }

    // Verify if mismatch flag is 0 AND both strings reached their null terminators
    if (flag == 0 && str1[i] == '\0' && str2[i] == '\0') {
        printf("Strings are same\n");
    } else {
        printf("Strings are different\n");
    }

    return 0;
}
