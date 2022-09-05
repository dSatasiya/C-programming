// Write a C program to find the transpose of the given matrix.
#include <stdio.h>

int main() 
{
    int a[2][3] = {1,1,1,2,8,5};
    int i,j;
    int temp[3][2];
    printf("This is the original matrix..\n");
    for(i=0; i<2; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("%d ", a[i][j]);
            temp[j][i] = a[i][j]; 
        }
        printf("\n");
    }
    printf("This is the transpose of the matrix..\n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<2; j++)
        {
            printf("%d ", temp[i][j]);
        }
        printf("\n");
    }
    return 0;
}
