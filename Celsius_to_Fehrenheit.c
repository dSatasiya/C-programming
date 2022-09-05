// Write a C program to convert celsius to Fehrenheit.

// Formula is : F = (c * 9/5) + 32
#include <stdio.h>

int main() 
{
    int f, c;
    printf("Enter the value in Celsius : ");
    scanf("%d", &c);
    
    f = (c * 9/5) + 32;
    
    printf("%dC = %dF", c, f);
    
    return 0;
}
