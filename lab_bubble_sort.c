/**
 * Module: Lab Programs
 * Problem: 14. Program to sort an array in ascending order using bubble sort
 * 
 * Description:
 * This program reads an array and sorts its elements in ascending order using the Bubble Sort algorithm.
 */

#include <stdio.h>

int main()
{
    int a[100], n, i, j, temp;

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

    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    printf("Sorted array in ascending order is\n");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}
