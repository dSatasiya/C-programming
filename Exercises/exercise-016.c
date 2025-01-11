// Write a C program to remove any negative sign in front of a number.

#include<stdio.h>

int main()
{
    signed int num;
    // int num2;
    printf("Enter the negative number : ");
    scanf("%d", &num);
    printf("\n%d", num);
    num = num + (-(2*num));
    printf("\n%d", num);
    return 0;
}

// Enter the negative number : -253
// -253
// 253
