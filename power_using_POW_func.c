// Write a c code to find Power of any number using POW function.
#include <stdio.h>
#include <math.h>
int main() 
{
    int num, power, result = 0;
    printf("Enter the number to find power : ");
    scanf("%d", &num);
    printf("Enter the power : ");
    scanf("%d", &power);
    
    result = pow(num, power);
    
    printf("The power %d of %d is = %d", power, num, result);

    return 0;
}
