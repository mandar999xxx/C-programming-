#include <stdio.h>

int main() {
    char upper, lower;
    printf("Enter the character in uppercase: \n");
    scanf("%c", &upper);
    lower = upper + 32;  // ASCII conversion
    printf("The lowercase character is = %c\n", lower);
    return 0;
}
