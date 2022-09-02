// Write a c code to find the square root of any number.

#include <stdio.h>
#include <math.h>

int main() 
{
    int num, result = 1;
    printf("Enter the number to find square root : ");
    scanf("%d", &num);
    
    result = sqrt(num);
    
    printf("The square root of %d is = %d", num, result);

    return 0;
}
