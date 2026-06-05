/**
 * Module: Module 3 (Arrays and Strings)
 * Problem: Binary Search on a sorted array
 * 
 * Description:
 * This program reads 'n' sorted elements into an array and searches for 
 * a key element using the Binary Search technique. The binary search 
 * continuously halves the search interval until the key is found or 
 * the interval is empty.
 */

#include <stdio.h>

int main() {
    int a[100], n, i, low, high, mid, key, flag = 0;

    // Prompt user for array size
    printf("Enter the size of the array: ");
    scanf("%d", &n);
        
    // Read the array elements (must be entered in ascending order)
    printf("Enter %d elements in ascending order:\n", n);
    for (i = 0; i < n; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }

    // Prompt for key search element
    printf("Enter the element to be searched: ");
    scanf("%d", &key);

    // Initialize search boundaries
    low = 0;
    high = n - 1;

    // Binary search logic
    while (low <= high) {
        mid = (low + high) / 2;

        if (key == a[mid]) {
            flag = 1; // Element found
            break;
        } else if (key > a[mid]) {
            low = mid + 1; // Search in the right half
        } else {
            high = mid - 1; // Search in the left half
        }
    }

    // Output search results
    if (flag == 1) {
        printf("Element found at position %d (index %d).\n", mid + 1, mid);
    } else {
        printf("Element not found\n");
    }

    return 0;
}
