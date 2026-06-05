/**
 * Module: Module 3 (Arrays and Strings)
 * Problem: String Concatenation without built-in functions
 * 
 * Description:
 * This program reads two strings, str1 (allocated with enough space for both) 
 * and str2. It manually traverses str1 to find its null terminator, copies 
 * characters from str2 to the end of str1, and explicitly null-terminates it.
 */

#include <stdio.h>

int main() {
    // str1 needs to be large enough to hold the combined string
    char str1[100], str2[50];
    int i = 0, j = 0;

    // Prompt user for input
    printf("Enter String 1: ");
    scanf("%49s", str1);

    printf("Enter String 2: ");
    scanf("%49s", str2);

    // Step 1: Move index 'i' to the end of str1 (the null character position)
    while (str1[i] != '\0') {
        i++;
    }

    // Step 2: Copy characters of str2 into str1 starting at index 'i'
    while (str2[j] != '\0') {
        str1[i] = str2[j];
        i++;
        j++;
    }

    // Step 3: Explicitly null-terminate the concatenated string
    str1[i] = '\0';

    // Output result
    printf("The concatenated string is = %s\n", str1);

    return 0;
}
