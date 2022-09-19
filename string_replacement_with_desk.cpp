// WAP to replace first occurance of vowel with '-'
#include <stdio.h>
#include <string.h>
int main()
{
    char name[100], ch;
    int len, i=0;
    printf("Enter the name : ");
    gets(name);
    len = strlen(name);
    while(name[i] != '\0')
    {
        if(name[i]=='a'||name[i]=='e'||name[i]=='i'||name[i]=='o'||name[i]=='u'||name[i]=='A'||name[i]=='E'||name[i]=='I'||name[i]=='O'||name[i]=='U')
        {
            name[i] = '-';
            break;
        }
        else if(name[i] == ' ')
        {
            i++;
            continue;
        }
        else
        {
            i++;
            continue;
        }
        i++;
    }
    printf("\n After replacement name is %s : ", name);
    return 0;
}
