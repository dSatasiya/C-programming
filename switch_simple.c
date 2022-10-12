// Example of simple switch statement.

#include<stdio.h>

int main()
{
    int i;
    printf("Enter the value of number : ");
    scanf("%d", &i);
    switch(i)
    {
        case 1: printf("Hello");
                break;
        case 2: printf("World");
                break;
    }
}
