// Write a c code to find the ssquare of any number function.
#include <stdio.h>

int main() 
{
    int num, square=2, result = 1;
    printf("Enter the number to find square : ");
    scanf("%d", &num);
    
    int i;
    for(i=1; i<=square; i++)
    {
        result = result*num;
    }
    
    printf("The square of %d is = %d", num, result);

    return 0;
}
