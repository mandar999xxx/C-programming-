/**
 * Module: Module 2 (Operators, Expressions, Conditionals & Loops)
 * Problem: Digit Counter
 * 
 * Description:
 * This program counts the number of digits in a given integer using a do-while loop.
 * A do-while loop is ideal here because it ensures the loop executes at least once,
 * which correctly counts '0' as having 1 digit.
 */

#include <stdio.h>

int main() {
    int num, temp, count = 0;

    // Prompt user for input
    printf("Enter a number: ");
    if (scanf("%d", &num) != 1) {
        printf("Error: Invalid input. Please enter a valid integer.\n");
        return 1;
    }

    // Copy the number to a temp variable to preserve the original value
    temp = num;

    // If the number is negative, convert it to positive for digit counting
    if (temp < 0) {
        temp = -temp;
    }

    // Count digits using a do-while loop
    do {
        count++;
        temp /= 10; // Eliminate the last digit (integer division)
    } while (temp != 0);

    // Print result
    printf("Number of digits in %d: %d\n", num, count);

    return 0;
}
