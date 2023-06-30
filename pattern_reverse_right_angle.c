#include<stdio.h>

int main()
{
    int counter;
    int totalLines;
    printf("Enter the total number of lines: ");
    scanf("%d", &totalLines);
    int modifier = 1;
    int spaceLines = totalLines;
    for(counter=0; counter<totalLines; counter++)
    {
        int cnt;
        for(cnt=spaceLines-1; cnt>0; cnt--)
        {
            printf("\t");
        }
        int internalCnt;
        for(internalCnt = 0; internalCnt<modifier; internalCnt++)
        {
            printf("\t*");
        }
        printf("\n");
        modifier +=1;
        spaceLines = spaceLines - 1;
    }
    return 0;

}

// Output:

                                        *
                                *       *
                        *       *       *
                *       *       *       *
        *       *       *       *       *
