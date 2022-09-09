// WAP to print the array in reverse order..

#include <stdio.h>
int main()
{
    // Second Method.....
    int a[5] = {1,2,3,4,5};
    int i, size1, size2;
    size1 = sizeof(a)/sizeof(a[0]);
    int rev[5] = {0};
    size2 = sizeof(rev)/sizeof(rev[0]);
    
    printf("\nThis is thi original array...\n");
    for(i=0; i<size1; i++)
    {
        printf("%d\t", a[i]);
    }
    
    printf("\nThis is its reverse array..\n");
    for(i=0; i<size2; i++)
    {
        rev[i] = a[size1-1];
        printf("%d\t", rev[i]);
        size1--;
    }
    
    return 0;
}
