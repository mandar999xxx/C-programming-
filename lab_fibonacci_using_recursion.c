/**
 * Module: Lab Programs
 * Problem: 9. Program to find Fibonacci series using recursion
 * 
 * Description:
 * This program generates and prints the Fibonacci series up to n terms using recursion.
 */

#include <stdio.h>

int fib(int n)
{
    if (n <= 1)
        return n;
    else
        return fib(n - 1) + fib(n - 2);
}

int main()
{
    int n, i;

    printf("Enter the number of terms\n");
    if (scanf("%d", &n) != 1 || n < 0) {
        printf("Error: Please enter a valid non-negative integer.\n");
        return 1;
    }

    printf("Fibonacci series is\n");
    for (i = 0; i < n; i++) {
        printf("%d ", fib(i));
    }
    printf("\n");

    return 0;
}
