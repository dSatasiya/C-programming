//  Write a C program to copy a given string into another and count the number of characters copied.


#include<stdio.h>
#include<string.h>
int main()
{
    char str1[10], str2[10];
    int len, i=0;
    printf("Enter the string : ");
    gets(str1);
    printf("%s", str1);
    // strcpy(str2, str1);
    // printf("\n%s", str2);
    printf("\n");
    while(str1[i]!='\0')
    {
        str2[i] = str1[i];
        printf("%c", str2[i]);
        i++;
    }
    printf("\n Number of characters copied is = %d", i);
    return 0;
    
}
// Enter the string : Satasiya
// Satasiya
// Satasiya
//  Number of characters copied is = 8
