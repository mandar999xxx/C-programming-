/**
 * Module: Module 3 (Arrays and Strings)
 * Problem: Reverse of 1D Array elements
 * 
 * Description:
 * This program reads 'n' elements in an array, displays them in their original 
 * input order, and then prints them in reverse order (from last index to first index).
 */

#include <stdio.h>

int main() {
    int a[20], n, i;

    // Prompt user for array size
    printf("Enter the array size (maximum 20): ");
    if (scanf("%d", &n) != 1 || n < 1 || n > 20) {
        printf("Error: Please enter a size between 1 and 20.\n");
        return 1;
    }

    // Read elements of the array
    printf("Enter the array elements:\n");
    for (i = 0; i < n; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }

    // Print elements in original order
    printf("The elements entered in the array are:\n");
    for (i = 0; i < n; i++) {
        printf("%d\t", a[i]);
    }
    printf("\n");

    // Print elements in reverse order
    printf("The elements of the array in reverse order are:\n");
    for (i = n - 1; i >= 0; i--) {
        printf("%d\t", a[i]);
    }
    printf("\n");

    return 0;
}
