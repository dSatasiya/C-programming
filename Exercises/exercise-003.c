// Write a C program to calculate the sum of all number not divisible by 17 between two given integer numbers.
#include<stdio.h>

int main()
{
    int i, int1, int2, sum = 0;
    printf("Enter the first integer : ");
    scanf("%d", &int1);
    printf("Enter the second integr : ");
    scanf("%d", &int2);
    for(i=int1; i<=int2; i++)
    {
        if(i%17 != 0)
        {
            sum = sum + i;
        }
    }
    printf("sum is = %d", sum);
    return 0;
}
