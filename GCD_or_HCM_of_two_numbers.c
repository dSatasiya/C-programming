// Write a program to find GCD or HCM of two numbers.
#include <stdio.h>

int main() 
{
    int n1, n2, i;
    int result = 0;
    printf("Enter the two numbers : ");
    scanf("%d %d", &n1, &n2);
    
    for(i=1; i<=100; i++)
    {
        if(n1%i==0 && n2%i==0)
        {
            result = i;
        }
    }
    printf("GCD of two given numbers is %d", result);
    printf("\nGCD(%d, %d) = %d", n1, n2, result);
    return 0;
}
