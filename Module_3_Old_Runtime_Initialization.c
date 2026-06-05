#include <stdio.h>

void main() {
    char upper, lower;
    int x;

    printf("Enter 1 for Lower->Upper or 2 for Upper->Lower: ");
    scanf("%d", &x);

    switch (x) {
        case 1:
            printf("Enter the element in lowercase: ");
            scanf(" %c", &lower); // Note the space before %c
            upper = lower - 32;
            printf("The uppercase character is = %c\n", upper);
            break;

        case 2:
            printf("Enter the element in uppercase: ");
            scanf(" %c", &upper);
            lower = upper + 32;
            printf("The lowercase character is = %c\n", lower);
            break;

        default:
            printf("Invalid choice!\n");
    }
}
