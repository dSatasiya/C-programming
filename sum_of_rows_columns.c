// Write a C program to find sum of individual rows and columns.

#include<stdio.h>

int main()
{
    int a[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int b[3][3];
    int row[3] = {0};
    int col[3] = {0};
    int i,j;
    printf("Sum of individual rows are...\n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            row[i] = row[i] + a[i][j];
        }
        printf("%d ", row[i]);
    }
     for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            b[i][j] = a[j][i];
        }
    }
    printf("\nSum of individual columns are...\n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            col[i] = col[i] + b[i][j];
        }
        printf("%d ", col[i]);
    }
    return 0;
}
