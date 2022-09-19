// WAP to count occurance of vowel and consonant in a string.
#include <stdio.h>
#include <string.h>
int main()
{
    char name[100], ch;
    int len, i=0, v_cnt=0, c_cnt=0;
    printf("Enter the name : ");
    gets(name);
    len = strlen(name);
    while(name[i] != '\0')
    {
        if(name[i]=='a'||name[i]=='e'||name[i]=='i'||name[i]=='o'||name[i]=='u'||name[i]=='A'||name[i]=='E'||name[i]=='I'||name[i]=='O'||name[i]=='U')
        {
            v_cnt++;
        }
        else if(name[i] == ' ')
        {
            i++;
            continue;
        }
        else
        {
            c_cnt++;
        }
        i++;
    }
    printf("\nIn name %s total number of vowel is = %d and consonant is = %d", name, v_cnt, c_cnt);
    return 0;
}
