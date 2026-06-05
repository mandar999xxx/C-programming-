/**
 * Module: Module 4 (Functions, Pointers, and Dynamic Memory)
 * Problem: Dynamic Memory Sum, Mean, and Standard Deviation
 * 
 * Description:
 * This program allocates memory dynamically for 'n' real elements (floats) 
 * using calloc(). It then reads the values, calculates their sum and mean, 
 * computes their variance and population standard deviation (using <math.h> 
 * pow and sqrt), prints the results, and frees the allocated memory.
 */

#include <stdio.h>
#include <stdlib.h> // Required for calloc/malloc and free
#include <math.h>   // Required for pow() and sqrt()

int main() {
    float *a, sum = 0, sumvar = 0, mean, var, sd;
    float *ptr;
    int n, i;

    // Prompt user for size
    printf("Enter the number of elements: ");
    if (scanf("%d", &n) != 1 || n < 1) {
        printf("Error: Size must be at least 1.\n");
        return 1;
    }

    // Allocate memory dynamically for 'n' real elements
    a = (float *)calloc(n, sizeof(float));
    if (a == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    // Read array elements
    printf("Enter %d array elements:\n", n);
    for (i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%f", &a[i]);
    }

    // Step 1: Calculate the Sum
    ptr = a;
    for (i = 0; i < n; i++) {
        sum += *ptr;
        ptr++;
    }

    // Step 2: Calculate the Mean
    mean = sum / n;

    // Step 3 & 4: Calculate Variance and Sum of Squared Differences
    ptr = a;
    for (i = 0; i < n; i++) {
        sumvar += pow((*ptr - mean), 2);
        ptr++;
    }
    var = sumvar / n;
    sd = sqrt(var); // Population standard deviation

    // Print calculated stats
    printf("\n--- Results ---\n");
    printf("Sum = %f\n", sum);
    printf("Mean = %f\n", mean);
    printf("Standard Deviation = %f\n", sd);

    // Free dynamically allocated space to avoid memory leaks
    free(a);

    return 0;
}
