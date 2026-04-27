#include<stdio.h>
int main ()
{
    int arr[6] = {12 , 45 , 8 , 30 , 22 , 50 };
    int searchkey; 
    int found = 0 ; //  This is a flag . 0 means not found , 1 means found !
    int i ;
    //2 ask the user what number to look for 
    printf("Enter a number to search for : ");
    scanf("%d", &searchkey);
for (int i=0 ; i<6 ; i++)
{
    if (arr[i] == searchkey){
   printf("Number found at index %d \n ",i );
    found = 1 ;
    break;
    }
 
}
   if (found == 0 ){
    printf("Number not found in the array ! \n ");
   }

return 0; 
}