// Q-41. Write a C program to print 3 numbers in a line, starting from 1 and print n lines. Accept number of lines (n, integer) from the user. 
#include<stdio.h>

int main()
{
    int i=0, j=3, k=1, l, n;
    printf("Enter the number of lines : ");
    scanf("%d", &n);
    for(l=0; l<n; l++)
    {
        for(i=k; i<=j; i++)
        {
            printf("%d ", i);
        }
        printf("\n");
        k = i;
        j = j+3;
    }
    return 0;
}

// Output will be like this :
// Enter the number of lines : 5
// 1 2 3 
// 4 5 6 
// 7 8 9 
// 10 11 12 
// 13 14 15 
