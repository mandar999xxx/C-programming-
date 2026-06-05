/**
 * Module: Module 4 (Functions, Pointers, and Dynamic Memory)
 * Problem: Bubble Sort using a Function
 * 
 * Description:
 * This program reads 'n' integers from the user, passes them to a modular 
 * bubble_sort() function which sorts the array in-place, and displays 
 * the sorted list in ascending order.
 */

#include <stdio.h>

// Function prototype declaration
void bubble_sort(int a[], int n);

int main() {
    int a[50], n, i;

    // Prompt user for number of elements
    printf("Enter the number of elements (maximum 50): ");
    if (scanf("%d", &n) != 1 || n < 1 || n > 50) {
        printf("Error: Size must be between 1 and 50.\n");
        return 1;
    }

    // Read the array elements
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }

    // Call sorting function
    bubble_sort(a, n);

    // Display sorted elements
    printf("\nThe sorted elements are:\n");
    for (i = 0; i < n; i++) {
        printf("%d\t", a[i]);
    }
    printf("\n");

    return 0;
}

/**
 * Function definition for bubble sort
 */
void bubble_sort(int a[], int n) {
    int i, j, temp;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            // Swap if current element is greater than the next element
            if (a[j] > a[j + 1]) {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}
