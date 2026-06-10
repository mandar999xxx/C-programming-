/**
 * Module: Lab Programs
 * Problem: 4. Leap year
 * 
 * Description:
 * This program checks whether a given year is a leap year.
 */

#include <stdio.h>

int main()
{
    int year;
    printf("Enter a year\n");
    if (scanf("%d", &year) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    if (year % 4 == 0 && year % 100 != 0)
        printf("%d is a leap year\n", year);
    else if (year % 400 == 0)
        printf("%d is a leap year\n", year);
    else
        printf("%d is not a leap year\n", year);

    return 0;
}
