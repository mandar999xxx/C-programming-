/**
 * Module: Module 3 (Arrays and Strings)
 * Problem: Element-wise addition of two 1D arrays
 * 
 * Description:
 * This program reads the number of elements 'n' (max 20) and elements 
 * for two arrays, Array A and Array B. It then calculates the element-wise 
 * sum and stores the result in Array C, and prints the result.
 */

#include <stdio.h>

int main() {
    int a[20], b[20], c[20], n, i;

    // Prompt user for array size
    printf("Enter the number of elements (maximum 20): ");
    if (scanf("%d", &n) != 1 || n < 1 || n > 20) {
        printf("Error: Please enter a size between 1 and 20.\n");
        return 1;
    }

    // Read elements of Array A
    printf("Enter the elements of Array A:\n");
    for (i = 0; i < n; i++) {
        printf("A[%d] = ", i);
        scanf("%d", &a[i]);
    }

    // Read elements of Array B
    printf("Enter the elements of Array B:\n");
    for (i = 0; i < n; i++) {
        printf("B[%d] = ", i);
        scanf("%d", &b[i]);
    }

    // Calculate sum of arrays A and B, store in array C
    for (i = 0; i < n; i++) {
        c[i] = a[i] + b[i];
    }

    // Output the resultant array
    printf("\nThe resultant sum array is:\n");
    for (i = 0; i < n; i++) {
        printf("C[%d] = %d\n", i, c[i]);
    }

    return 0;
}
