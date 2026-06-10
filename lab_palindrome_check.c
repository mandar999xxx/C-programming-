/**
 * Module: Lab Programs
 * Problem: 13. Program to check whether a number is palindrome or not
 * 
 * Description:
 * This program checks whether a given integer is a palindrome (reads the same backwards).
 */

#include <stdio.h>

int main()
{
    int n, rev = 0, temp, rem;

    printf("Enter a number\n");
    if (scanf("%d", &n) != 1) {
        printf("Error: Invalid input.\n");
        return 1;
    }

    temp = n;
    while (temp != 0)
    {
        rem = temp % 10;
        rev = rev * 10 + rem;
        temp = temp / 10;
    }

    if (n == rev)
        printf("%d is a palindrome\n", n);
    else
        printf("%d is not a palindrome\n", n);

    return 0;
}
