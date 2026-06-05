/**
 * Module: Module 2 (Operators, Expressions, Conditionals & Loops)
 * Problem: Simple Calculator using Switch Case
 * 
 * Description:
 * This program simulates a basic calculator. It reads an arithmetic operator 
 * (+, -, *, /) and two operands, and performs the corresponding calculation 
 * using a switch-case statement. It includes safety checks for division by zero.
 */

#include <stdio.h>

int main() {
    char op;
    double n1, n2;

    // Prompt user to enter operator
    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &op); // Space before %c skips any leading whitespace or newlines

    // Prompt user to enter two numbers
    printf("Enter two operands: ");
    if (scanf("%lf %lf", &n1, &n2) != 2) {
        printf("Error: Please enter valid numbers.\n");
        return 1;
    }

    // Process operation using switch-case
    switch (op) {
        case '+':
            printf("%.2lf + %.2lf = %.2lf\n", n1, n2, n1 + n2);
            break;
        case '-':
            printf("%.2lf - %.2lf = %.2lf\n", n1, n2, n1 - n2);
            break;
        case '*':
            printf("%.2lf * %.2lf = %.2lf\n", n1, n2, n1 * n2);
            break;
        case '/':
            // Avoid division by zero crash
            if (n2 == 0) {
                printf("Error: Division by zero is undefined.\n");
            } else {
                printf("%.2lf / %.2lf = %.2lf\n", n1, n2, n1 / n2);
            }
            break;
        default:
            printf("Error: '%c' is not a valid operator.\n", op);
            break;
    }

    return 0;
}
