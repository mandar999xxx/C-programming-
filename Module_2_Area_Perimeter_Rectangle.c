/**
 * Module: Module 2 (Operators, Expressions, Conditionals & Loops)
 * Problem: Area and Perimeter of a Rectangle
 * 
 * Description:
 * This program reads the length and width of a rectangle (floating-point numbers),
 * and computes its area (length * width) and perimeter (2 * (length + width)).
 */

#include <stdio.h>

int main() {
    float l, w, area, peri;

    // Prompt user for dimensions
    printf("Enter length and width of the rectangle: ");
    if (scanf("%f %f", &l, &w) != 2 || l <= 0 || w <= 0) {
        printf("Error: Please enter valid positive numerical dimensions.\n");
        return 1;
    }

    // Calculations
    area = l * w;
    peri = 2 * (l + w);

    // Print results
    printf("Area = %.2f\n", area);
    printf("Perimeter = %.2f\n", peri);

    return 0;
}
