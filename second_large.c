// Find second largest and number....

#include <stdio.h>
int main()
{
    int a[5] = {2,1,3,4,5};
    int i, high = a[0], sec_high = a[0];
    
    for(i=0;i<5;i++)
    {
        if(a[i]>high)
        {
            sec_high = high;
            high = a[i];
        }
    }
    printf("%d", high);
    printf("\nSecond Largest number is = %d", sec_high);
    return 0;
}
