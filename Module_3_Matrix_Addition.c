/**
 * Module: Module 3 (Arrays and Strings)
 * Problem: Matrix Addition
 * 
 * Description:
 * This program reads the dimensions (rows and columns) of two matrices, 
 * populates their values, adds them element-wise, and prints the 
 * resultant sum matrix.
 */

#include <stdio.h>

int main() {
    int a[20][20], b[20][20], c[20][20];
    int m, n, i, j;

    // Prompt user for rows and columns
    printf("Enter the number of rows and columns of matrix (e.g. 3 3): ");
    if (scanf("%d%d", &m, &n) != 2 || m < 1 || m > 20 || n < 1 || n > 20) {
        printf("Error: Matrix boundaries must be between 1x1 and 20x20.\n");
        return 1;
    }

    // Populate Matrix A
    printf("Enter the elements of Matrix A:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("A[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    // Populate Matrix B
    printf("Enter the elements of Matrix B:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("B[%d][%d] = ", i, j);
            scanf("%d", &b[i][j]);
        }
    }

    // Perform Matrix Addition
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            c[i][j] = a[i][j] + b[i][j];
        }
    }

    // Display the resultant matrix
    printf("\nThe resultant matrix (A + B) is:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("%d\t", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}
