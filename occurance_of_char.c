#include<stdio.h>

#define LEN 50

int stringSearching(char* ptr, char charToSearch)
{
    int count = 0;
    while(*ptr != '\0')
    {
        if(*ptr == charToSearch)
        {
            count++;
        }
        ptr = ptr + 1;
    }
    printf("Total occurances of the given character is : %d", count);
}

int main()
{
    char stringArray[LEN] = {0}; 
    char charToSearch = '\0';

    printf("Enter any word or sentence : ");
    scanf("%s", stringArray);
    printf("\nEnter a character to be searched : ");
    scanf(" %c", &charToSearch);

    stringSearching(stringArray, charToSearch);

    return 0;
}
