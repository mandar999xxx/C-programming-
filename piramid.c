#include<stdio.h>
int main() {

    int rows = 5 ; // int %d float %f double %lf 
    float  i, j ; 
    printf("Type 1 printing style \n"); 
    for (i= rows ; i>=1; i--){
         
        for (j= 1 ; j<=i ; j++){
            // printf(" %d i " , i);
            printf(" %.f " ,j);

        }
       printf("\n");
    }
    
    printf("Type 2 printing style \n"); 
    for (i = 1 ; i<= rows; i++ )
    {
        for(j = 1 ; j<= i ; j++ ){
            printf(" %.f " , j); 
        }
        printf("\n");
    }

    printf("Type 3 printing style \n "); 

    for ( i = 1; i <= rows; i++)
    {
       for (j= i ; j>= 1 ; j--){
        printf(" %.f " , i);
       } 
       printf("\n");
    }

    printf("Type 4 printing style \n"); 
    for (i= rows ; i>=1; i--){
         
        for (j= 1 ; j<=i ; j++){
            // printf(" %d i " , i);
            printf(" * ");

        }
       printf("\n");
    }
    


    return 0 ;
}

