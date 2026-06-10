/**
 * Module: Lab Programs
 * Problem: 10. Program to swap two numbers using call by reference
 * 
 * Description:
 * This program swaps two integers using pointers (call by reference).
 */

#include <stdio.h>

void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int x, y;

    printf("Enter two numbers\n");
    if (scanf("%d %d", &x, &y) != 2) {
        printf("Error: Invalid input.\n");
        return 1;
    }

    printf("Before swap: x = %d, y = %d\n", x, y);
    swap(&x, &y);
    printf("After swap: x = %d, y = %d\n", x, y);

    return 0;
}
