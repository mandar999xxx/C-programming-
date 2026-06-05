/**
 * Module: Module 2 (Operators, Expressions, Conditionals & Loops)
 * Problem: Armstrong Number Checker
 * 
 * Description:
 * This program checks whether a given number is an Armstrong number or not.
 * An Armstrong number of three digits is an integer such that the sum of the 
 * cubes of its digits is equal to the number itself (e.g. 153 = 1^3 + 5^3 + 3^3).
 * A do-while loop is used to extract and process digits.
 */

#include <stdio.h>

int main() {
    int n, original, rem, res = 0;

    // Prompt user for input
    printf("Enter integer: ");
    if (scanf("%d", &n) != 1 || n < 0) {
        printf("Error: Please enter a valid non-negative integer.\n");
        return 1;
    }

    // Save the original value
    original = n;

    // Extract digits and sum their cubes in a do-while loop
    do {
        rem = n % 10;
        res += rem * rem * rem;
        n /= 10;
    } while (n != 0);

    // Output comparison
    if (res == original) {
        printf("%d is an Armstrong number.\n", original);
    } else {
        printf("%d is not an Armstrong number.\n", original);
    }

    return 0;
}
