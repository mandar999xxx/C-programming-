#include<stdio.h>
int main()
{
    int arr[5] = {45 , 92 , 12 , 88 , 7 }; 
    int max = arr[0] , i; 
    for (i =1 ; i< 5  ; i++ )
    if (arr[i] > max )
{
    max = arr[i]; 
}
printf ("The largest number in the array is : %d \n ", max );
return 0 ; 


}