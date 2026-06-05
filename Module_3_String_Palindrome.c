/**
 * Module: Module 3 (Arrays and Strings)
 * Problem: String Palindrome Checker
 * 
 * Description:
 * This program checks whether a user-entered string is a palindrome.
 * It calculates the length of the string, copies the characters in reverse 
 * order to a second string, null-terminates it, and compares the two strings 
 * using strcmp().
 */

#include <stdio.h>
#include <string.h>

int main() {
    char str1[50], str2[50];
    int i, j, len, x;

    // Prompt user for input
    printf("Enter a string: ");
    scanf("%49s", str1);

    j = 0;
    len = strlen(str1); // Find the length of the input string

    // Copy characters in reverse order
    for (i = len - 1; i >= 0; i--) {
        str2[j] = str1[i];
        j++;
    }
    str2[j] = '\0'; // Explicitly null-terminate the reversed string

    printf("The original String = %s\n", str1);
    printf("The reversed String = %s\n", str2);

    // Compare original and reversed strings
    x = strcmp(str1, str2);

    if (x == 0) {
        printf("%s is a palindrome\n", str1);
    } else {
        printf("%s is not a palindrome\n", str1);
    }

    return 0;
}
