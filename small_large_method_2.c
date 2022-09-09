// Method - 2
// Find largest and smallest number....

#include <stdio.h>

int find_s_l(int[], int);

int find_s_l(int a[], int size)
{
    int small = a[0], large = a[0];
    int i;
    
    for(i=0; i<5; i++)
    {
        if(a[i]<small)
        {
            small = a[i];
        }
        if(a[i]>large)
        {
            large = a[i];
        }
    }
    printf("\nThe smallest number = %d", small);
    printf("\nThe largest number = %d", large);
}

int main() 
{
    int a[5] = {2,5,6,8,9};
    int largest, smallest;
    
    find_s_l(a, 5);
    return 0;
}
