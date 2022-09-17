// WAP to convert lower case into upper case.

#include <stdio.h>
#include <string.h>

int main() 
{
    char s1[25];
    printf("Enter the name : ");
    gets(s1);
    int len, i;
    len = strlen(s1);
    for(i=0; i<=len; i++)
    {
        if(s1[i]>='a' && s1[i]<='z')
        {
            s1[i] = s1[i] - 32;
        }
        else
        {
            s1[i] = s1[i];
        }
    }
    printf("%s", s1);
    return 0;
}
