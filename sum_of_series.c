#include <stdio.h>
#include <math.h>

int main() {
    int choice, n, i;
    double sum = 0; // Using double for better precision across all series

    printf("Select the series to calculate:\n");

    printf("1. 1 + 1/2 + 1/3 + ... + 1/n\n");

    printf("2. 1/1^2 + 1/2^2 + ... + 1/n^2\n");

    printf("3. 1/2 + 2/3 + ... + n/(n+1)\n");

    printf("4. 1^1/1 + 2^2/2 + ... + n^n/n\n");

    printf("Enter choice (1-4): ");

    scanf("%d", &choice);

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        switch (choice) {
            case 1:
                sum += 1.0 / i;
                break;
            case 2:
                sum += 1.0 / pow(i, 2);
                break;
            case 3:
                sum += (double)i / (i + 1);
                break;
            case 4:
                sum += pow(i, i) / i;
                break;
            default:
                printf("Invalid choice!\n");
                return 1; // Exit with error
        }
    }

    printf("\nResult: Sum of series = %lf\n", sum);

    return 0;
}




// #include <stdio.h>

// int main() {
//     int n, i;
//     float sum = 0;

//     printf("Enter the value of n: ");
//     scanf("%d", &n);

//     for (i = 1; i <= n; i++) {
//         sum += 1.0 / i;
//     }

//     printf("Sum of series (i) = %f\n", sum);
//     return 0;
// }

// #include <stdio.h>
// #include <math.h>

// int main() {
//     int n, i;
//     float sum = 0, a;

//     printf("Enter the value of n: ");
//     scanf("%d", &n);

//     for (i = 1; i <= n; i++) {
//         // We use 1.0 to ensure floating-point division
//         a = 1.0 / pow(i, 2); 
//         sum = sum + a;
//     }

//     printf("Sum of series (ii) = %f\n", sum);

//     return 0;
// }


// #include <stdio.h>

// int main() {
//     int n, i;
//     float sum = 0;

//     printf("Enter the value of n: ");
//     scanf("%d", &n);

//     for (i = 1; i <= n; i++) {
//         // Cast i to float to ensure fractional division
//         sum += (float)i / (i + 1);
//     }

//     printf("Sum of series (iii) = %f\n", sum);
//     return 0;
// }

// #include <stdio.h>
// #include <math.h>

// int main() {
//     int n, i;
//     double sum = 0; // Double is better for large exponents

//     printf("Enter the value of n: ");
//     scanf("%d", &n);

//     for (i = 1; i <= n; i++) {
//         sum += pow(i, i) / i;
//     }

//     printf("Sum of series (iv) = %lf\n", sum);
//     return 0;
// }