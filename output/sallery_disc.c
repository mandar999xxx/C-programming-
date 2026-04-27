#include <stdio.h>

int main() {
    float bill, discount, finaldisc;

    printf("Enter the amount: \n");
    scanf("%f", &bill);

    if (bill >= 10000) {
        discount = 0.30 * bill;  // 30% discount for 10,000+
    } 
    else if (bill >= 7000) {
        discount = 0.20 * bill;  // 20% discount for 7,000+
    } 
    else if (bill >= 4000) {
        discount = 0.10 * bill;  // 10% discount for 4,000+
    } 
    else {
        discount = 0;            // 0% discount for anything lower
    }


    finaldisc = bill - discount;

    
    printf("The Discount is = %.2f\n . ", discount); 
    printf("The Final Amount to pay is = %.2f\n .", finaldisc);

    return 0; 
}