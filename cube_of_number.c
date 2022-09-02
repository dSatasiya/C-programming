// Write a c code to find the cube of any number function.
#include <stdio.h>

int main() 
{
    int num, cube=3, result = 1;
    printf("Enter the number to find cube : ");
    scanf("%d", &num);
    
    int i;
    for(i=1; i<=cube; i++)
    {
        result = result*num;
    }
    
    printf("The cube of %d is = %d", num, result);

    return 0;
}
