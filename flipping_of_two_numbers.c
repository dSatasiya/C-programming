// This code will flip the values of two numbers...


#include <stdio.h>

int main() 
{
    int a = 10, b = 25;
    printf("Before flipping...");
    printf("a = %d and b = %d\n", a, b);
    
    int temp = 0;
    temp = a;
    a = b;
    b = temp;
    
    printf("After flipping...");
    printf("a = %d and b = %d", a, b);
    
    return 0;
}
