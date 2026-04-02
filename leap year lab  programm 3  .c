

#include <stdio.h>

int main() {
    int year; // Variable to store the user's input

    printf("Enter the year: ");
    /* scanf is used for 'Formatted Input'. 
       %d tells the compiler to expect an integer. */
    scanf("%d", &year);

    /* LOGIC EXPLAINED:
       - (year % 4 == 0): The year must be divisible by 4.
       - (year % 100 != 0): BUT not divisible by 100...
       - (year % 400 == 0): ...UNLESS it is also divisible by 400.
       
       && is 'Logical AND' (both sides must be true).
       || is 'Logical OR' (at least one side must be true).
       % is the 'Modulo Operator' (it gives the remainder of a division).
    */
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        printf("%d is a leap year.\n", year);
    } else {
        printf("%d is not a leap year.\n", year);
    }

    return 0; // Signals that the program finished successfully
}