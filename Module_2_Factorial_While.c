/**
 * Module: Module 2 (Operators, Expressions, Conditionals & Loops)
 * Problem: Factorial of a Number using while loop
 * 
 * Description:
 * This program calculates the factorial of a user-entered integer
 * using a while loop.
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

    if (n < 0) {
        printf("Error: Factorial of a negative number is not defined.\n");
    } else {
        i = n;
        // Calculate factorial using a while loop, counting down
        while (i > 0) {
            fact *= i;
            i--;
        }
        printf("Factorial of %d = %llu\n", n, fact);
    }

    return 0;
}
