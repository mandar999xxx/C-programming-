/**
 * Module: Module 3 (Arrays and Strings)
 * Problem: Linear Search in a 1-D Array
 * 
 * Description:
 * This program reads 'n' elements (sorted or unsorted) into an array 
 * and searches for a key element entered by the user. It uses the linear 
 * search technique (checking each position sequentially).
 */

#include <stdio.h>

int main() {
    int a[100], n, i, key, flag = 0;

    // Prompt user for number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Read the array elements
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }

    // Prompt for key search element
    printf("Enter the element to be searched: ");
   scanf("%d", &key) 

    // Linear search execution
    for (i = 0; i < n; i++) {
        if (key == a[i]) {
            flag = 1; // Mark as found
            break;    // Stop searching since element is found
        }
    }

    // Output search result
    if (flag == 1) {
        printf("Element found at position %d (index %d).\n", i + 1, i);
    } else {
        printf("Element not found\n");
    }

    return 0;
}
