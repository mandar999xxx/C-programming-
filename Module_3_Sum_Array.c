/**
 * Module: Module 3 (Arrays and Strings)
 * Problem: Sum of 1-D array elements
 * 
 * Description:
 * This program reads an array of size 'n' (max 100) from the user
 * and calculates the sum of all its elements.
 */

#include <stdio.h>

int main() {
    int a[100], n, i, sum = 0;

    // Prompt user for array size
    printf("Enter the number of elements: ");
    if (scanf("%d", &n) != 1 || n < 1 || n > 100) {
        printf("Error: Please enter a size between 1 and 100.\n");
        return 1;
    }

    // Read array elements
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &a[i]);
    }

    // Loop through array and accumulate sum
    for (i = 0; i < n; i++) {
        sum += a[i];
    }

    // Output the calculated sum
    printf("\nSum of array elements = %d\n", sum);

    return 0;
}
