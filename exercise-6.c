// Q - 45. Write a C program to calculate the value of S where S = 1 + 1/2 + 1/3 + … + 1/50.

#include<stdio.h>

int main()
{
    float sum = 0, i, con = 1;
    for(i=1; i<=50; i++)
    {
        sum = sum + (con/i);
    }
    printf("S = %.2f", sum);
    return 0;
}

// Expected Output:
// Value of S: 4.50
