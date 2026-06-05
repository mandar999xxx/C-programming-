/**
 * Module: Module 4 (Functions, Pointers, and Dynamic Memory)
 * Problem: Swap Two Numbers using Call by Reference
 * 
 * Description:
 * This program demonstrates the Call by Reference mechanism. It defines 
 * a swap function that takes pointer parameters. The main function passes 
 * the memory addresses of two variables to swap, which permanently modifies 
 * their values in the caller's scope.
 */

#include <stdio.h>

// Function prototype declaration accepting pointer parameters
void swap(int *a, int *b);

int main() {
    int a, b;

    // Prompt user for input
    printf("Enter two numbers to swap:\n");
    if (scanf("%d%d", &a, &b) != 2) {
        printf("Error: Please enter valid integers.\n");
        return 1;
    }

    printf("Before Swapping:\n");
    printf("a = %d\tb = %d\n", a, b);

    // Call by Reference: Pass the memory addresses of variables a and b
    swap(&a, &b);

    printf("\nAfter Swapping:\n");
    printf("a = %d\tb = %d\n", a, b);

    return 0;
}

/**
 * Function definition that swaps values at the provided memory addresses
 * using a temporary variable.
 */
void swap(int *a, int *b) {
    int temp;
    temp = *a; // Save value at address 'a' into temp
    *a = *b;   // Copy value at address 'b' into address 'a'
    *b = temp; // Copy saved value in temp into address 'b'
}
