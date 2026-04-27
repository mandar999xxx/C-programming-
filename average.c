#include<stdio.h>
int main() 
{
    int scores[5] = {85 , 90 , 78 , 92 ,88 };
int sum = 0, i ; 

// 
for (i = 0 ; i<5 ; i++)
{
    sum = sum + scores[i];
    }
float average = sum / 5.0  ; // use decimal for geting in average marks in decimal


printf("Your total score is : %d \n ", sum);
printf("Your averaage marks is : %.2f \n ", average); // %df prints exactly 2 decimal place 


return 0; 

}