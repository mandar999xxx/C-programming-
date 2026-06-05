/**
 * Module: Module 2 (Operators, Expressions, Conditionals & Loops)
 * Problem: Fibonacci Series Generator
 * 
 * Description:
 * This program generates and prints the Fibonacci series up to N terms.
 * The Fibonacci series begins with 0 and 1, and each subsequent term
 * is the sum of the preceding two terms (0, 1, 1, 2, 3, 5, 8, 13...).
 */

#include <stdio.h>

int main() {
    int n, i;
    int f1 = 0, f2 = 1, f3;

    // Prompt user for number of terms
    printf("Enter the number of terms: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Error: Please enter a valid positive integer greater than 0.\n");
        return 1;
    }

    printf("Fibonacci Series up to %d terms: ", n);

    // Handle edge cases for n = 1 and n = 2
    if (n >= 1) {
        printf("%d ", f1);
    }
    if (n >= 2) {
        printf("%d ", f2);
    }

    // Loop for calculating and printing third term onwards
    for (i = 3; i <= n; i++) {
        f3 = f1 + f2;
        printf("%d ", f3);
        f1 = f2; // Update first term to second term
        f2 = f3; // Update second term to newly calculated term
    }
    printf("\n");

    return 0;
}
