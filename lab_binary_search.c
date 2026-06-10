/**
 * Module: Lab Programs
 * Problem: 2. Binary Search
 * 
 * Description:
 * This program performs a binary search on a sorted array of size n.
 */

#include <stdio.h>

int main()
{
    int a[100], n, i, low, high, mid, key, flag = 0;

    printf("Enter the size of the array\n");
    if (scanf("%d", &n) != 1 || n < 1 || n > 100) {
        printf("Invalid size.\n");
        return 1;
    }

    printf("Enter the element in ascending order\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter the element to be searched\n");
    if (scanf("%d", &key) != 1) {
        printf("Invalid key.\n");
        return 1;
    }

    low = 0;
    high = n - 1;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (key == a[mid])
        {
            flag = 1;
            break;
        }
        else
        {
            if (key > a[mid])
                low = mid + 1;
            else
                high = mid - 1;
        }
    }

    if (flag == 1)
        printf("Element found at position %d\n", mid + 1);
    else
        printf("Element not found\n");

    return 0;
}
