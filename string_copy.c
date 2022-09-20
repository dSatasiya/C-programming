// WAP to copy one string to another string.

#include <stdio.h>
#include <string.h>

int main() 
{
    char name[20], name2[20];
    printf("Enter the name : ");
    gets(name);
    int len;
    len = strlen(name);
    int i=0;
    while(name[i] != '\0')
    {
        name2[i] = name[i];
        i++;
    }
    printf("Copied string is : %s", name2);
    return 0;
}
