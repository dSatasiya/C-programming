// Write a C program to calculate the simple interest.

#include <stdio.h>

int main() 
{
    int amount; 
    float rate;
    int interest=0;
    printf("Enter the amount : ");
    scanf("%d", &amount);
    printf("Enter the interest in percentage : ");
    scanf("%f", &rate);    // remember, here we have to use %f instead of %d. As we are taking floating value from the user as interest rate.
    
    interest = (amount*rate)/100;
    
    printf("Final interest amount is %d ", interest);
    
    return 0;
}
