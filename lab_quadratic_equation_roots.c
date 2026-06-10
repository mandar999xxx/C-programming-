/**
 * Module: Lab Programs
 * Problem: 6. Quadratic equation roots
 * 
 * Description:
 * This program calculates the roots of a quadratic equation.
 */

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    float a, b, c, d, x1, x2;
    printf("Enter the coefficients a, b, c\n");
    if (scanf("%f %f %f", &a, &b, &c) != 3) {
        printf("Invalid input.\n");
        return 1;
    }

    if (a == 0)
    {
        printf("Cannot find roots\n");
        return 0;
    }
    else
    {
        d = b * b - 4 * a * c;
        if (d > 0)
        {
            printf("The roots are real and distinct\n");
            x1 = (-b + sqrt(d)) / (2 * a);
            x2 = (-b - sqrt(d)) / (2 * a);
            printf("x1 = %f and x2 = %f\n", x1, x2);
        }
        else if (d == 0)
        {
            printf("The roots are real and equal\n");
            x1 = -b / (2 * a);
            printf("x1 = x2 = %f\n", x1);
        }
        else
        {
            printf("The roots are imaginary\n");
        }
    }

    return 0;
}
