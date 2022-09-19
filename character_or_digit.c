// WAP to check whether given character is digit or not.
#include <stdio.h>

int main()
{
    char ch;
    printf("Enter the character : ");
    scanf("%c", &ch);
    if(ch >= 'a' && ch <='z')
    {
        printf("%c is character...", ch);
    }
    else
    {
        printf("%c is digit...", ch);
    }
    
    return 0;
}
