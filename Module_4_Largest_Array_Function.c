/**
 * Module: Module 4 (Functions, Pointers, and Dynamic Memory)
 * Problem: Find Largest Element in Array using Function
 * 
 * Description:
 * This program reads an array and passes it to a user-defined function 
 * largest() which traverses the array to identify and return its maximum element.
 */

#include <stdio.h>

// Function prototype declaration
int largest(int a[20], int n);

int main() {
    int a[20], n, i, max;

    // Prompt user for input
    printf("Enter the value of n (maximum 20): ");
    if (scanf("%d", &n) != 1 || n < 1 || n > 20) {
        printf("Error: Size must be between 1 and 20.\n");
        return 1;
    }

    // Read the array elements
    printf("Enter %d values:\n", n);
    for (i = 0; i < n; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }

    // Pass the entire array and its size to the function
    max = largest(a, n);

    // Display the largest element
    printf("Largest element in array = %d\n", max);

    return 0;
}

/**
 * Function definition that computes and returns the maximum element in the array
 */
int largest(int a[20], int n) {
    int max = a[0]; // Assume first element is largest initially
    int i;

    for (i = 1; i < n; i++) {
        if (a[i] > max) {
            max = a[i]; // Update max if a larger element is found
        }
    }
    return max;
}
