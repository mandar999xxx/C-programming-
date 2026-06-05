/**
 * Module: Module 2 (Operators, Expressions, Conditionals & Loops)
 * Problem: Basic Arithmetic Operations
 * 
 * Description:
 * This program reads two integers and performs all five basic arithmetic 
 * operations: addition (+), subtraction (-), multiplication (*), division (/), 
 * and modulus (%). It handles the edge case of division-by-zero safely.
 */

#include <stdio.h>

int main() {
    int a, b;

    // Prompt user for two integers
    printf("Enter two integers: ");
    if (scanf("%d %d", &a, &b) != 2) {
        printf("Error: Please enter two valid integers.\n");
        return 1;
    }

    // Display arithmetic results
    printf("Sum: %d\n", a + b);
    printf("Difference: %d\n", a - b);
    printf("Product: %d\n", a * b);

    // division by zero check is necessary for '/' and '%'
    if (b != 0) {
        // Integer division quotient
        printf("Quotient (Integer Division): %d\n", a / b);
        // Cast to float for exact decimal division output
        printf("Division (Decimal): %.2f\n", (float)a / b);
        // Modulo operator gives the remainder of division
        printf("Modulus (Remainder): %d\n", a % b);
    } else {
        printf("Error: Division/Modulus by zero is undefined.\n");
    }

    return 0;
}
