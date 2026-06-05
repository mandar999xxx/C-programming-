/**
 * Module: Module 2 (Operators, Expressions, Conditionals & Loops)
 * Problem: Factorial of a Number using for loop
 * 
 * Description:
 * This program calculates the factorial of a user-entered integer.
 * It checks for edge cases (negative numbers, 0, 1) and calculates
 * the product from 1 up to 'n' using a standard for loop.
 * 
 * Note: Factorials grow extremely fast. We use 'unsigned long long' 
 * to support numbers up to n = 20 without overflow.
 */

#include <stdio.h>

int main() {
    int n, i;
    unsigned long long fact = 1;

    // Prompt user for input
    printf("Enter a positive integer: ");
    if (scanf("%d", &n) != 1) {
        printf("Error: Please enter a valid integer.\n");
        return 1;
    }

    // Factorial is not defined for negative numbers
    if (n < 0) {
        printf("Error: Factorial of a negative number is not defined.\n");
    } else {
        // Calculate factorial using a for loop
        for (i = 1; i <= n; i++) {
            fact *= i;
        }
        printf("Factorial of %d = %llu\n", n, fact);
    }

    return 0;
}
