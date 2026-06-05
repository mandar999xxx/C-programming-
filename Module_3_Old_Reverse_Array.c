#include<stdio.h>
int main() {
    int arr [5] = {10 , 20 , 30 , 40 ,50}; 
    int left = 0 ;
    int right = 4 ; 
    int temp ; 

    while (left < right)
    {   temp = arr [left]  ; 
        arr [left] = arr[right];
         arr[right] = temp;

        left++; 
        right--; 
    }
    printf("Reversed array : ");
    for(int i=0; i<5; i++){
        printf("%d ",arr[i]);
    }
printf("\n");
return 0 ;
}