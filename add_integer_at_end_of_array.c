// WAP to insert an element at end of an array..

#include <stdio.h>

int main() 
{
    int a[] = {1,2,3,4,5};
    int size, i;
    size = sizeof(a)/sizeof(a[0]);
    for(i=0; i<size; i++)
    {
        printf("%d\t", a[i]);
    }
    printf("\n");
    a[size] = 6;
    for(i=0; i<size+1; i++)
    {
        printf("%d\t", a[i]);
    }
    // int num, j;
    // printf("Enter the number of digits to be inserted at end of an array...\n");
    // scanf("%d", &num);
    // for(j=0; j<num; j++)
    // {
    //     a[size+j] = 6;
    //     printf("%d", a[size+j]);
    // }
    // for(i=0; i<size+num; i++)
    // {
    //     printf("%d\t", a[i]);
    // }
    return 0;
}
