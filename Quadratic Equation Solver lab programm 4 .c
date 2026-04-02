#include <stdio.h>
#include <math.h>   // Required for the sqrt() function
#include <stdlib.h> // Useful for system-level functions like exit codes

int main() {
    /* 'double' provides 15-17 decimal places of precision. 
       Note: If you switch to 'float', use %f in scanf/printf instead of %lf. */
    double a, b, c, discriminant, root1, root2, realPart, imagPart;

    printf("Enter coefficients a, b and c: ");
    /* %lf = 'long float' (the format specifier for double) */
    scanf("%lf %lf %lf", &a, &b, &c);

    /* 1. VALIDATION: Check if it's actually a quadratic equation. 
       If a = 0, we'd be dividing by zero later, which crashes the program! */
    if (a == 0) {
        printf("Error: 'a' cannot be 0. This is a linear equation.\n");
        return 1; 
    }

    /* 2. THE DISCRIMINANT (D): 
       This single value tells us which "Path" the math will take. */
    discriminant = b * b - 4 * a * c;

    // PATH 1: D is Positive (Two distinct real numbers)
    if (discriminant > 0) {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        
        printf("Nature: Roots are real and distinct.\n");
        printf("Root 1 = %.2lf\nRoot 2 = %.2lf\n", root1, root2);
    }
    
    // PATH 2: D is Zero (The "Perfect Square" case)
    else if (discriminant == 0) {
        /* Since sqrt(0) is 0, the +/- part of the formula disappears. */
        root1 = root2 = -b / (2 * a);
        
        printf("Nature: Roots are real and equal.\n");
        printf("Root 1 = Root 2 = %.2lf\n", root1);
    }
    
    // PATH 3: D is Negative (The "Imaginary" case)
    else {
        /* In C, sqrt() cannot take a negative number. 
           So, we use '-discriminant' to make it positive for the calculation, 
           then we manually print 'i' to show it's imaginary. */
        realPart = -b / (2 * a);
        imagPart = sqrt(-discriminant) / (2 * a);
        
        printf("Nature: Roots are complex and distinct.\n");
        printf("Root 1 = %.2lf + %.2lfi\n", realPart, imagPart);
        printf("Root 2 = %.2lf - %.2lfi\n", realPart, imagPart);
    }

    return 0;
}