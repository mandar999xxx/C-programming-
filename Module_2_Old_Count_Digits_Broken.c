#include <stdio.h>

void main() {
int reversed = 0 , reminder ,n , original ; 
printf("Ente the integer "); 
scanf("%d",&n);
n = original; 

while (n !=0)
{
  reminder = n % 10 ;
  reversed = reversed * 10 +reminder; 
  n /= 10 ; 


}
if (original == reversed ) 
printf("it is an palindrom %d ",reversed);
else
printf("not a pallandrom");

}
