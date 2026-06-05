/**
 * Module: Module 4 (Functions, Pointers, and Dynamic Memory)
 * Problem: Find Largest Element in a Matrix using Function
 * 
 * Description:
 * This program reads a 2D array (matrix) of size r x c, passes it to a user-defined 
 * function find_matrix_largest() which returns the largest value in the matrix, 
 * and prints the result.
 */

#include <stdio.h>

// Prototype declaration for a function accepting a 2D array matrix row parameter
int find_matrix_largest(int matrix[10][10], int rows, int cols);

int main() {
    int abc[10][10], r, c, i, j, max;

    // Prompt user for matrix dimensions
    printf("Enter rows and columns for the matrix (maximum 10x10): ");
    if (scanf("%d %d", &r, &c) != 2 || r < 1 || r > 10 || c < 1 || c > 10) {
        printf("Error: Matrix dimensions must be between 1x1 and 10x10.\n");
        return 1;
    }

    // Read matrix elements
    printf("Enter the elements of matrix:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            printf("abc[%d][%d] = ", i, j);
            scanf("%d", &abc[i][j]);
        }
    }

    // Pass the 2D array to the function to find the max value
    max = find_matrix_largest(abc, r, c);

    printf("\nLargest element in the matrix = %d\n", max);

    return 0;
}

/**
 * Function definition that searches and returns the maximum element in the 2D array
 */
int find_matrix_largest(int matrix[10][10], int rows, int cols) {
    int max = matrix[0][0]; // Assume first element is largest initially
    int i, j;

    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            if (matrix[i][j] > max) {
                max = matrix[i][j]; // Update max if a larger element is found
            }
        }
    }
    return max;
}
