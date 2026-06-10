/**
 * Module: Lab Programs
 * Problem: 1. Array Addition
 * 
 * Description:
 * This program reads two arrays of size n, computes their element-wise 
 * sum, and stores/prints the result.
 */

#include <stdio.h>

int main()
{
    int i, n;
    int a[100], b[100], c[100]; // Increased capacity to prevent overflow

    printf("enter the number of elements\n");
    if (scanf("%d", &n) != 1 || n < 1 || n > 100) {
        printf("Invalid number of elements. Must be between 1 and 100.\n");
        return 1;
    }

    printf("enter the elements of array a\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("enter the elements of array b\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &b[i]);
    }

    for (i = 0; i < n; i++) {
        c[i] = a[i] + b[i];
    }

    printf("result array c is\n");
    for (i = 0; i < n; i++) {
        printf("%d ", c[i]);
    }
    printf("\n");

    return 0;
}
