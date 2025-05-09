#include<stdio.h>

int main()
{
    int i;
    int modifier = 1;
    int totalLines;
    printf("Enter the total number of lines to make the right angle: ");
    scanf("%d", &totalLines);
    for(i = 0; i<totalLines; i++)
    {
        int j = 0;
        while(j<modifier)
        {
            printf("*\t");
            j++;
        }
        modifier = modifier + 1;
        printf("\n");
    }   
    return 0;
}

// Output:
*
*       *
*       *       *
*       *       *       *
*       *       *       *       *
