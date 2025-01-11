// Write a C program to evaluate the equation y=xn when n is a non-negative integer. 

#include<stdio.h>

int main()
{
    int y, x, n;
    int flag=0;
    printf("Enter the value of x : ");
    scanf("%d", &x);
    printf("Enter the value of n : ");
    scanf("%d", &n);
    if(n>=0)
    {
        y = x*n;
    }
    // else
    // {
    //     flag = 1;
    //     break;
    // }
    // if(flag==1)
    // {
    // printf("\nYou have entered a negative number...");
    // }
    printf("\nY = %d", y);
    return 0;
}
