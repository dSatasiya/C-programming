// WAP to check whether name is palindrome or not.
#include<stdio.h>
#include<string.h>
int main() 
{
    char s1[20];
    printf("Enter the name : ");
    gets(s1);
    char rev[20];
    int i, len;
    len = strlen(s1); 
    for(i=0; i<=len; i++)
    {
        if(s1[i]=='\0')
        {
            break;
        }
        rev[i] = s1[len-1-i];
    }
    printf("\nReversed name is : %s", rev);
    int flag = 0;
    for(i=0; i<len; i++)
    {
        if(s1[i]!=rev[i])
        {
            flag = 1;
            break;
        }
        continue;
    }
    if(flag==1)
    {
        printf("\nName is not palindrome..");
    }
    else
    {
        printf("\nName is palindrome..");
    }
    return 0;
}
