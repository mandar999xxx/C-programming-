/**
 * Module: Lab Programs
 * Problem: 11. Program to find the largest element in an array
 * 
 * Description:
 * This program reads an array of size n and finds the maximum value.
 */

#include <stdio.h>

int main()
{
    int a[100], n, i, max;

    printf("Enter the number of elements\n");
    if (scanf("%d", &n) != 1 || n < 1 || n > 100) {
        printf("Error: Invalid number of elements. Must be between 1 and 100.\n");
        return 1;
    }

    printf("Enter the elements\n");
    for (i = 0; i < n; i++) {
        if (scanf("%d", &a[i]) != 1) {
            printf("Error: Invalid input.\n");
            return 1;
        }
    }

    max = a[0];
    for (i = 1; i < n; i++)
    {
        if (a[i] > max)
            max = a[i];
    }

    printf("The largest element is %d\n", max);

    return 0;
}
