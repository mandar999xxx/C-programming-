/**
 * Module: Lab Programs
 * Problem: 15. Program to calculate the sum of diagonal elements of a matrix
 * 
 * Description:
 * This program calculates the sum of the primary diagonal elements of a square matrix.
 */

#include <stdio.h>

int main()
{
    int a[10][10], n, i, j, sum = 0;

    printf("Enter the size of square matrix\n");
    if (scanf("%d", &n) != 1 || n < 1 || n > 10) {
        printf("Error: Invalid size. Size must be between 1 and 10.\n");
        return 1;
    }

    printf("Enter the elements of matrix\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (scanf("%d", &a[i][j]) != 1) {
                printf("Error: Invalid input.\n");
                return 1;
            }
        }
    }

    for (i = 0; i < n; i++) {
        sum = sum + a[i][i];
    }

    printf("Sum of diagonal elements is %d\n", sum);

    return 0;
}
