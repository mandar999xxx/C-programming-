/**
 * Module: Lab Programs
 * Problem: 12. Program to find the transpose of a matrix
 * 
 * Description:
 * This program reads an m x n matrix and computes its transpose.
 */

#include <stdio.h>

int main()
{
    int a[10][10], b[10][10], m, n, i, j;

    printf("Enter the number of rows and columns\n");
    if (scanf("%d %d", &m, &n) != 2 || m < 1 || m > 10 || n < 1 || n > 10) {
        printf("Error: Invalid dimensions. Size must be between 1 and 10.\n");
        return 1;
    }

    printf("Enter the elements of matrix\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            if (scanf("%d", &a[i][j]) != 1) {
                printf("Error: Invalid input.\n");
                return 1;
            }
        }
    }

    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            b[j][i] = a[i][j];
        }
    }

    printf("Transpose of the matrix is\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++) {
            printf("%d ", b[i][j]);
        }
        printf("\n");
    }

    return 0;
}
