



#include<stdio.h>
int  main() {
    int number, i    ; 
    int fact =1 ;

    printf("Enter the numbers ");
    scanf("%d",&number);

    for( i=1 ;  i<= number ; i ++) {
        
    fact = fact * i ;  

    }

    printf ("The factorial of %d  is %d "  , number, fact); 
return 0 ; 


}

// outptu >>>> 
// Enter the numbers 5
// The factorial of 5  is 120 