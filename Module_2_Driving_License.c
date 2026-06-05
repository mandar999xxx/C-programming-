/**
 * Module: Module 2 (Operators, Expressions, Conditionals & Loops)
 * Problem: Driving License Eligibility Checker
 * 
 * Description:
 * This program reads a person's age and determines if they are eligible 
 * to get a driving license (minimum age requirement is 18 years).
 */

#include <stdio.h>

int main() {
    int age; // Variable to store user's age

    // Prompt the user for input
    printf("Enter your age: ");
    
    // Read the age value as an integer
    // Note: Always use the address-of operator '&' for scanf to store the input
    if (scanf("%d", &age) != 1) {
        printf("Error: Please enter a valid numerical age.\n");
        return 1; // Exit with error code if input is invalid
    }

    // Conditional check using if-else
    if (age >= 18) {
        printf("You are eligible for a driving license.\n");
    } else {
        printf("You are not eligible. You need to wait %d more year(s).\n", 18 - age);
    }

    return 0; // Successful execution
}
