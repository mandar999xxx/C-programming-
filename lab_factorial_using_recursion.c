/**
 * Module: Lab Programs
 * Problem: 8. Program to calculate factorial using recursion
 * 
 * Description:
 * This program calculates the factorial of a given non-negative integer using recursion.
 */

#include <stdio.h>

int fact(int n)
{
    if (n == 0)
        return 1;
    else
        return n * fact(n - 1);
}

int main()
{
    int n, result;

    printf("Enter a number\n");
    if (scanf("%d", &n) != 1 || n < 0) {
        printf("Error: Please enter a valid non-negative integer.\n");
        return 1;
    }

    result = fact(n);
    printf("Factorial of %d is %d\n", n, result);

    return 0;
}
