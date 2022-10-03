// Write a C program to print all numbers between 1 to 100 which divided by a specified number and the remainder will be 3.
#include<stdio.h>

int main()
{
    int num, rem = 3, i;
    printf("Enter the number : ");
    scanf("%d", &num);
    for(i=1; i<=100; i++)
    {
        if(i%num == rem)
        {
            printf("%d\n", i);
        }
    }
    return 0;
}
