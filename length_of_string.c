// WAP to find the length of the string.

#include <stdio.h>
#include <string.h>

int main() 
{
    // method : 1 - by using default function.
    // char name[20] = "Dhruv Satasiya";
    // int len;
    // len = strlen(name);
    // printf("Length of the string is : %d ", len);
    
    // method : 2 - without using default function.
    char name[20] = "Dhruv Satasiya";
    int cnt = 0, i = 0;
    while(name[i] != '\0')
    {
        cnt++;
        i++;
    }
    printf("Length of the string is : %d", cnt);
    
    return 0;
}
