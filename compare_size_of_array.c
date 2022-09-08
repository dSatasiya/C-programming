// WAP to find whether the size of two arrays are equale or not.

#include <stdio.h>

int main() 
{
    int a[] = {1,2,3,4,5,6,7,8,9,10};
    int b[] = {1,2,3,4,56,2,3,5,6,4};
    int i, size1, size2;
    
    size1 = sizeof(a)/sizeof(a[0]);
    printf("Size of array a is : %d", size1);
    size2 = sizeof(b)/sizeof(b[0]);
    printf("\nSize of array b is : %d", size2);
    
    if(size1 == size2)
    {
        printf("\nBoth the arrays are of equale size..");
    }
    else
    {
        printf("\nBoth arrays have different sizes..");
    }
    return 0;
}
