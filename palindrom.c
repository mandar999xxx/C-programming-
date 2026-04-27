#include <stdio.h>

int main() {
    int num, original, reversed = 0, rem;

    printf("Enter an integer: ");
    scanf("%d", &num);

    original = num;   // store original number

    // reverse the number
    do {
        rem = num % 10;
        reversed = reversed * 10 + rem;
        num /= 10;
    } while(num != 0);

    // check palindrome
    if(original == reversed)
        printf("%d is a palindrome.\n", original);
    else
        printf("%d is not a palindrome.\n", original);

    return 0;
}


// 1. remainder = num % 10: This extracts the last digit of the number.

// 2.reversedNum = reversedNum * 10 + remainder: This builds the reversed number. Multiplying by 10 "shifts" the existing digits to the left to make room for the new one.

// 3.  num /= 10: This removes the last digit from the number so the loop can process the next one.

// 4. do-while vs while: In this specific case, both work similarly, but the do-while ensures that even if you enter 0, the code processes it once.