// WAP to replace a string space with given character.
#include <stdio.h>
#include <string.h>
int main()
{
    char name[20], ch;
    int len, i;
    printf("Enter the name : ");
    gets(name);
    printf("Enter the character to replace : ");
    scanf("%c", &ch);
    len = strlen(name);
    for(i=0; i<=len; i++)
    {
        if(name[i] == ' ')
        {
            name[i] = ch;
        }
    }
    printf("%s", name);
  
    return 0;
}
