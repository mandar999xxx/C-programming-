/**
 * Module: Module 3 (Arrays and Strings)
 * Problem: String Length using strlen()
 * 
 * Description:
 * This program reads a string from the user and calculates its length
 * using the built-in strlen() function from the <string.h> library.
 */

#include <stdio.h>
#include <string.h>

int main() {
    char str1[100];
    int len;

    // Prompt user for input
    printf("Enter a string: ");
    scanf("%99s", str1);

    // Using built-in string function to evaluate size
    len = strlen(str1);

    printf("Length of the String = %d\n", len);

    return 0;
}
