// WAP to count occurance of a given character in a string.

#include <stdio.h>
#include <string.h>

int main() 
{
    char name[20], ch;
    int i,j = 0, cnt = 0, k = 0, len;
    printf("Enter the name : ");
    gets(name);
    printf("Enter the character : ");
    scanf("%c", &ch);
    len = strlen(name);
    while(name[k] != '\0')
    {
        if(name[k] == ch)
        {
            for(i=0; i<=len; i++)
            {
                if(name[k] == name[i])
                {
                    cnt++;
                }
            }
        printf("%c is occurred %d times ..\n", name[k], cnt);
        cnt = 0, j++;
        }
        k++;
    }
    // printf("%c is occurred %d times ..", name[j], cnt);
    return 0;
}
