// WAP to find whether the size of two arrays are equale or not.

#include <stdio.h>

int main() 
{
    int a[5] = {8,3,4,5,6};
    int size;
    size = sizeof(a)/sizeof(a[0]);
    int i, k, cnt=0;
    
    for(i=0; i<size; i++)
    {
        for(k=0; k<size; k++)
        {
            if(a[i]<=a[k])
            {
                cnt = cnt+1;
                while(cnt==size)
                {
                    printf("%d is the smallest number in the array", a[i]);
                    break;
                }
                continue;
            }
            continue;
        }
    }
    
    for(i=0; i<size; i++)
    {
        for(k=0; k<size; k++)
        {
            if(a[i]>=a[k])
            {
                cnt = cnt+1;
                while(cnt==size)
                {
                    printf("%d is the smallest number in the array", a[i]);
                    break;
                }
                continue;
            }
            continue;
        }
    }
    
    return 0;
}
