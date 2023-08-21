#include<stdio.h>

#define LEN 50

int main()
{
    int spaceCount = 0;
    int wordCount = 1;
    int tabCount = 0;
    char name[LEN] = {0};
    int index = 0;
    printf("Enter the name :");
    scanf("%[^\n]s", &name);

    while (name[index] != '\0')
    {
        if(name[index] == ' ')
        {
            spaceCount++;
            wordCount++;
        }
        if(name[index] == '\t')
        {
            tabCount++;
        }
        index++;
    }
    printf("Total spaces in the sentence is = %d", spaceCount);
    printf("\nTotal words count in the sentence is = %d", wordCount);
    printf("\nTotal tabs in the sentence is : %d", tabCount);
    
    printf("\n");
    //printf("%s", name);

    return 0;
}
