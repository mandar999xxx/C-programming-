/**
 * Module: Module 2 (Operators, Expressions, Conditionals & Loops)
 * Problem: Triangle Asterisk Pattern
 * 
 * Description:
 * Prints a right-angled triangle of asterisks using nested for loops:
 * * 
 * * * 
 * * * * 
 * * * * * 
 * * * * * *
 */

#include <stdio.h>

int main() {
    int i, j, rows = 5;

    // Prompt user for rows (optional, default to 5 for standard lab exercises)
    printf("Enter number of rows (default is 5): ");
    if (scanf("%d", &rows) != 1 || rows <= 0) {
        rows = 5; // fallback to default
    }

    // Outer loop controls the row number
    for (i = 1; i <= rows; i++) {
        // Inner loop controls the number of columns (asterisks) in current row
        for (j = 1; j <= i; j++) {
            printf("* ");
        }
        // Move to the next line after completing a row
        printf("\n");
    }

    return 0;
}
