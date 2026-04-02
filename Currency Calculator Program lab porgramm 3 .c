#include <stdio.h>

int main() {
    /* Initialization: We set 'tot' to 0 to ensure no 
       garbage values interfere with our calculation. */
    int total = 0, num_10, num_20, num_50, num_100;

    // Sequence of user inputs
    printf("Enter the number of ten rupee coins\n");
    scanf("%d", &num_10);

    printf("Enter the number of twenty rupee coins\n");
    scanf("%d", &num_20);

    printf("Enter the number of fifty rupee coins\n");
    scanf("%d", &num_50);

    printf("Enter the number of hundred rupee coins\n");
    scanf("%d", &num_100);

    /* EXPRESSION EVALUATION:
       The values inside the parentheses are multiplied first (multiplication 
       has higher precedence), then added together.
       Note: We use underscores (num_10) because C does not allow 
       hyphens in variable names.
    */
    total = (num_10 * 10) + (num_20 * 20) + (num_50 * 50) + (num_100 * 100);

    /* Displaying the result: %d is replaced by the value of 'total' */
    printf("Total amount of money is %d\n", total);

    return 0;
}