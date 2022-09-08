// WAP to find a missing number in array b. The values of both arrays are given.
#include <stdio.h>

int main() 
{
    int a[5] = {1,2,3,4,5};
    int b[5] = {2,3,1,0,5};
    int i, sum1 = 0, sum2 = 0, ab_num = 0;
    
    
    for(i=0; i<5; i++)
    {
        sum1 = sum1 + a[i];
        sum2 = sum2 + b[i];
    }
    ab_num = sum1 - sum2;
    printf("Missing number in array b is %d", ab_num);
    return 0;
}
