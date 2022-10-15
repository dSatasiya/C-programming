// 62. Write a C program that accepts a positive integer less than 500 and prints out the sum of the digits of this number.

#include<stdio.h>

int main()
{
    int i, rem, num, sum = 0;
    printf("Enter the number less than 500 : ");
    scanf("%d", &num);
    while(num != 0)
    {
        rem = num%10;
        sum = sum + rem;
        num = num/10;
    }
    printf("Sum of the digits of a given numbers is : %d", sum);
    return 0;
}


// Input a positive number less than 500:
// Sum of the digits of 347 is 14
