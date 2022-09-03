// Write a C program to find the LCM of two given number.
// LCM means Least Common Multiple 

#include <stdio.h>

int main() 
{
   int n1, n2, rem;
//   int lim = 100;
   printf("Enter the two number to find LCM : ");
   scanf("%d %d", &n1, &n2);
   
   int i;
   for(i=1 ;; i++)
   {
       if(i%n1==0 && i%n2==0)
       {
           printf("%d is the LCM of two given numbers.", i);
           printf("\nLCM(%d, %d) = %d", n1, n2, i);
           break;
       }
   }
   return 0;
}
