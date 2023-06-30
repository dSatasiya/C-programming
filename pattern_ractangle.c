#include<stdio.h>

int main()
{
    int i = 0;
    int j;
    for(j=0; j<5; j++)
    {
        int i = 0;
        while (i<5)
        {
            printf("*\t");
            i++;
        }
        printf("\n");
    }
    
    printf("\n");
    return 0;
    
}

// Output:

*       *       *       *       *
*       *       *       *       *
*       *       *       *       *
*       *       *       *       *
*       *       *       *       *
