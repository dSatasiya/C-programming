// WAP to print the array in reverse order..

#include <stdio.h>
int main()
{
    int a[] = {1,2,6,5,6,7,2,3,5};
    int i;
    int size = sizeof(a)/sizeof(a[0]);
    
    printf("This is the array in its original order..\n");
    for(i=0; i<size; i++)
    {
        printf("%d\t", a[i]);
    }
    printf("\nThis is the array in its reverse order..\n");
    for(i=size-1; i>=0; i--)
    {
        printf("%d\t", a[i]);
    }
    return 0;
}
