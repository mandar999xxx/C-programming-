/**
 * Module: Module 2 (Operators, Expressions, Conditionals & Loops)
 * Problem: Descending Number Pattern
 * 
 * Description:
 * Prints the following number pattern using nested loops:
 * 5 5 5 5 5
 * 4 4 4 4
 * 3 3 3
 * 2 2
 * 1
 */

#include <stdio.h>

int main() {
    int i, j;

    // Outer loop starts from 5 and decrements to 1
    // It controls the row value and the number of repetitions
    for (i = 5; i >= 1; i--) {
        // Inner loop runs 'i' times for the current row
        for (j = 1; j <= i; j++) {
            printf("%d ", i);
        }
        // Print newline to jump to next line after completing row
        printf("\n");
    }

    return 0;
}
