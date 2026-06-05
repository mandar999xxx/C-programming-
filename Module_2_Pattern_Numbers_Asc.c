/**
 * Module: Module 2 (Operators, Expressions, Conditionals & Loops)
 * Problem: Ascending Number Pattern
 * 
 * Description:
 * Prints the following pattern using nested for loops:
 * 1 
 * 2 2 
 * 3 3 3 
 * 4 4 4 4 
 * 5 5 5 5 5
 */

#include <stdio.h>

int main() {
    int i, j, rows = 5;

    // Outer loop controls the current row number and the printed digit value
    for (i = 1; i <= rows; i++) {
        // Inner loop prints the digit 'i', 'i' times in the current row
        for (j = 1; j <= i; j++) {
            printf("%d ", i);
        }
        // Move to the next line after completing a row
        printf("\n");
    }

    return 0;
}
