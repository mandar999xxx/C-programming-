/**
 * Module: Module 2 (Operators, Expressions, Conditionals & Loops)
 * Problem: Reverse of a positive integer and Palindrome check
 * 
 * Description:
 * This program reads a positive integer, reverses its digits mathematically 
 * using modulo (%) and division (/) operations, and compares the reversed 
 * number with the original number to check if it is a palindrome.
 */

#include <stdio.h>

int main() {
    int n, reversed = 0, original, remainder;

    // Prompt user for input
    printf("Enter an integer: ");
    if (scanf("%d", &n) != 1 || n < 0) {
        printf("Error: Please enter a valid positive integer.\n");
        return 1;
    }

    // Save the original value
    original = n;

    // Mathematical loop to reverse the digits
    while (n != 0) {
        remainder = n % 10;                     // Extract the last digit
        reversed = reversed * 10 + remainder;   // Append to reversed number
        n /= 10;                                // Remove the last digit
    }

    printf("Reversed number = %d\n", reversed);

    // Palindrome comparison
    if (original == reversed) {
        printf("%d is a palindrome.\n", original);
    } else {
        printf("%d is not a palindrome.\n", original);
    }

    return 0;
}
