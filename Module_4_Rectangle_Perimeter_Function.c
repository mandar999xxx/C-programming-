/**
 * Module: Module 4 (Functions, Pointers, and Dynamic Memory)
 * Problem: Perimeter of a Rectangle using Function
 * 
 * Description:
 * This program reads length and breadth from the user, calls a user-defined 
 * function perimeter() with these parameters, and prints the calculated value.
 */

#include <stdio.h>

// Function prototype
int perimeter(int x, int y);

int main() {
    int l, b, p;

    // Prompt user for input
    printf("Enter length and breadth of rectangle: ");
    if (scanf("%d%d", &l, &b) != 2 || l <= 0 || b <= 0) {
        printf("Error: Please enter valid positive integers.\n");
        return 1;
    }

    // Function call using actual parameters 'l' and 'b'
    p = perimeter(l, b);

    printf("Perimeter of Rectangle = %d\n", p);

    return 0;
}

/**
 * Function definition with formal parameter markers
 */
int perimeter(int x, int y) {
    int per;
    per = 2 * (x + y);
    return per; // Passes calculated value back to caller
}
