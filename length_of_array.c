// WAP to clacualte a lenght of an array.

#include <stdio.h>

int main() 
{
    int a[10];
    int length, i;
    for(i=0; i<10; i++)
    {
        printf("Enter the array element : ");
        scanf("%d", &a[i]);
    }
    length = sizeof(a)/sizeof(a[0]);
    printf("\nLength of an array is %d", length);
    return 0;
}
