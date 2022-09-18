// WAP to remove any given character from the string.

#include <stdio.h>
#include <string.h>

int main() 
{
    char name[20], ch;
    int len, i;
    printf("Enter the name : ");
    gets(name);
    printf("Enter the character you want to remove : ");
    scanf("%c", &ch);
    len = strlen(name);
    for(i=0; i<=len; i++)
    {
        if(name[i] == ch)
        {
            continue;
        }
        printf("%c", name[i]);
    }
    return 0;
}
