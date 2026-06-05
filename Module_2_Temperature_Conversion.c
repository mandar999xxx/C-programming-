/**
 * Module: Module 2 (Operators, Expressions, Conditionals & Loops)
 * Problem: Temperature Converter (Celsius to Fahrenheit)
 * 
 * Description:
 * This program reads temperature in Celsius, converts it to Fahrenheit 
 * using the standard formula F = (C * 9/5) + 32, and prints the result.
 */

#include <stdio.h>

int main() {
    float celsius, fahrenheit;

    // Prompt user for input
    printf("Enter temperature in Celsius: ");
    if (scanf("%f", &celsius) != 1) {
        printf("Error: Please enter a valid number.\n");
        return 1;
    }

    // Convert to Fahrenheit
    // Note: We use 9.0 and 5.0 to enforce floating-point division
    fahrenheit = (celsius * 9.0 / 5.0) + 32.0;

    // Print the result with 2 decimal precision
    printf("%.2f Celsius = %.2f Fahrenheit\n", celsius, fahrenheit);

    return 0;
}
