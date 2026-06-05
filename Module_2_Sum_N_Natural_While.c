/**
 * Module: Module 2 (Operators, Expressions, Conditionals & Loops)
 * Problem: Sum of first N Natural Numbers using while loop
 * 
 * Description:
 * This program reads an integer N, and calculates the sum of all natural 
 * numbers from 1 up to N (i.e. 1 + 2 + ... + N) using a while loop.
 */

#include <stdio.h>

int main() {
    int n, i = 1, sum = 0;

    // Prompt user for input
    printf("Enter N: ");
    if (scanf("%d", &n) != 1 || n < 1) {
        printf("Error: Please enter a positive integer greater than 0.\n");
        return 1;
    }

    // Accumulate sum in a while loop
    while (i <= n) {
        sum += i;
        i++;
    }

    printf("Sum of first %d natural numbers = %d\n", n, sum);

    return 0;
}
