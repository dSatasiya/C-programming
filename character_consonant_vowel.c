// WAP to check whether given character is vowel or consonant.

#include <stdio.h>

int main()
{
    char ch;
    printf("Enter the character : ");
    scanf("%c", &ch);
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
    {
        printf("%c is vowel...", ch);
    }
    else
    {
        printf("%c is consonant...", ch);
    }
    return 0;
}
