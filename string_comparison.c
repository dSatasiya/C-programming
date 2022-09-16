// WAP to compare two strings....
#include <stdio.h>

int main() 
{
    // method : 1 - by using default function.
    char name1[20] = "Dhruv";
    char name2[20] = "Krishna";
    int val;
    // val = strcmp(name1, name2);
    // if(val==0)
    // {
    //     printf("Both strings are same...");
    // }
    // else
    // {
    //     printf("Both strings are not same...");
    // }
    
    // mmethod : 2 - without using default function.
    
    int i=0, flag = 0;
    while(name1[i] != '\0' || name2[i] != '\0')
    {
        if(name1[i] != name2[i])
        {
            flag = 1;
            break;
        }
        i++;
    }
    if(flag==1)
    {
        printf("Both strings are not same...");
    }
    else
    {
        printf("Both strings are same...");
    }
    
    return 0;
}
