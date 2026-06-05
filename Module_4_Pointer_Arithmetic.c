/**
 * Module: Module 4 (Functions, Pointers, and Dynamic Memory)
 * Problem: Addition and Subtraction using Pointers
 * 
 * Description:
 * This program reads two integers from the user, assigns their memory 
 * addresses to pointers, and performs addition and subtraction by 
 * dereferencing those pointers using the indirection operator (*).
 */

#include <stdio.h>

int main() {
    int first, second, sum, diff;
    int *p, *q; // Pointer declarations

    // Prompt user for input
    printf("Enter two integers: ");
    if (scanf("%d%d", &first, &second) != 2) {
        printf("Error: Please enter valid integers.\n");
        return 1;
    }

    // Assign addresses of variables to pointers
    p = &first;
    q = &second;

    // Access values using the indirection operator (*)
    sum = *p + *q;
    diff = *p - *q;

    // Display the results
    printf("Sum of the numbers = %d (calculated using pointers)\n", sum);
    printf("Difference of the numbers = %d (calculated using pointers)\n", diff);

    return 0;
}
