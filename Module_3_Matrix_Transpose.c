/**
 * Module: Module 3 (Arrays and Strings)
 * Problem: Matrix Transpose
 * 
 * Description:
 * This program reads a matrix of size m x n, computes its transpose 
 * (where rows become columns, and columns become rows), and prints 
 * the resulting n x m transposed matrix.
 */

#include <stdio.h>

int main() {
    int a[20][20], b[20][20];
    int m, n, i, j;

    // Prompt user for rows and columns
    printf("Enter the rows and columns of the matrix (e.g. 2 3): ");
    if (scanf("%d%d", &m, &n) != 2 || m < 1 || m > 20 || n < 1 || n > 20) {
        printf("Error: Matrix boundaries must be between 1x1 and 20x20.\n");
        return 1;
    }

    // Populate Matrix A
    printf("Enter the elements of Matrix:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("Matrix[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    // Transpose Logic: b[j][i] = a[i][j]
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            b[j][i] = a[i][j];
        }
    }

    // Display Transposed Matrix
    // Note: The loop outer boundary changes to 'n' (columns become rows)
    // and the inner boundary changes to 'm' (rows become columns)
    printf("\nThe Transpose of the matrix is:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            printf("%d\t", b[i][j]);
        }
        printf("\n");
    }

    return 0;
}
