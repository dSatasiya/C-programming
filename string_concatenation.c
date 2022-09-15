// WAP to concatenate two strings.

#include <stdio.h>
#include <string.h>

int main() 
{
    // method : 1 - by using default function.
    // char s1[10] = "Dhruv";
    // char s2[10] = " Satasiya";
    // strcat(s1,s2);
    // printf("Concatenated string is : %s\n", s1);
    
    // method : 2 - without using default function.
    char s1[10] = "Dhruv";
    char s2[10] = " Satasiya";
    int len1, len2;
    len1 = strlen(s1);   // 5
    len2 = strlen(s2);   // 9
    int i;
    for(i=0; i<=len2; i++)
    {
        s1[i+len1] = s2[i];
    }
    printf("%s", s1);
    
    return 0;
}
