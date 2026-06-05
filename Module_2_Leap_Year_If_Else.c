/**
 * Module: Module 2 (Operators, Expressions, Conditionals & Loops)
 * Problem: Leap Year Checker using if-else ladder
 * 
 * Description:
 * This program checks whether a user-entered year is a leap year or not
 * using an if-else ladder.
 * 
 * Logic rules:
 * 1. If divisible by 400, it IS a leap year.
 * 2. Else if divisible by 100, it is NOT a leap year.
 * 3. Else if divisible by 4, it IS a leap year.
 * 4. Else, it is NOT a leap year.
 */

#include <stdio.h>

int main() {
    int year;

    // Prompt user for year
    printf("Enter a year: ");
    if (scanf("%d", &year) != 1) {
        printf("Error: Please enter a valid year.\n");
        return 1;
    }

    // if-else ladder structure
    if (year % 400 == 0) {
        printf("%d is a Leap Year.\n", year);
    } else if (year % 100 == 0) {
        printf("%d is not a Leap Year.\n", year);
    } else if (year % 4 == 0) {
        printf("%d is a Leap Year.\n", year);
    } else {
        printf("%d is not a Leap Year.\n", year);
    }

    return 0;
}
