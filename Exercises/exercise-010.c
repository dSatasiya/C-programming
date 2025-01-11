// Write a C program that accepts a positive integer n less than 100 from the user and prints out the sum 14 + 24 + 44 + 74 + 114 + • • • + m4 , where m is less than or equal to n. Print appropriate message. 

#include<stdio.h>
#include<math.h>

int main()
{
    int num, i, j=1, sum=0;
    printf("Enter the number less than 100 : ");
    scanf("%d", &num);
    for(i=1; i<=num; i++)
    {
        sum = sum + pow(j, 4);
        j = j + i;
    }
    printf("Sum of the series is = %d", sum);
    return 0;
}
