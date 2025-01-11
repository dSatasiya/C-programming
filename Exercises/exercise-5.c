//Q-42 Write a C program to print a number, it’s square and cube in a line, starting from 1 and print n lines. Accept number of lines (n, integer) from the user.

#include<stdio.h>
#include<math.h>

int main()
{
    int i, num, j, k, power;
    printf("Enter the number of lines to print : ");
    scanf("%d", &num);
    for(j=1; j<=num; j++)
    {
        for(i=1; i<=3; i++)
        {
            power = pow(j, i);
            printf("%d ", power);
        }
        printf("\n");
    }
}

// Input number of lines: 5
// Expected Output:
// 1 1 1
// 2 4 8
// 3 9 27
// 4 16 64
// 5 25 125
