// WAP to remove repeated characters from the string.

#include <stdio.h>
#include <string.h>

int main() 
{
    char name[20];
    printf("Enter the name : ");
    gets(name);
    int len;
    len = strlen(name);
    int i=0, j;
    while(name[i] != '\0')
    {
        for(j=i+1; j<len; j++)
        {
            if(name[i] != name[j])
            {
                continue;
            }
            else
            {
                i++;
            }
        }
        printf("%c", name[i]);
        i++;
    }
    return 0;
}
