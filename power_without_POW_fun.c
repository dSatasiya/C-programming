// Write a c code to find Power of any number without POW function.
#include <stdio.h>
#include <math.h>
int main() 
{
    int num, power, result = 1;
    printf("Enter the number to find power : ");
    scanf("%d", &num);
    printf("Enter the power : ");
    scanf("%d", &power);
    
    int i;
    for(i=1; i<=power; i++)
    {
        result = result*num;
    }
    
    printf("The power %d of %d is = %d", power, num, result);

    return 0;
}
