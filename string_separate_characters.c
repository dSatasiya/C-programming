// WAP to separate characters in a string.
#include <stdio.h>
#include <string.h>
int main()
{
    char name[100], ch = ' ';
    int len, i=0;
    printf("Enter the name : ");
    gets(name);
    len = strlen(name);
    while(name[i] != '\0')
    {
        printf("%c", name[i]);
        printf("%c", ch);
        i++;
    }
    return 0;
}
