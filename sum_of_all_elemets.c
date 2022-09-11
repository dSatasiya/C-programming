// WAP to find sum of array elements.. 

#include <stdio.h>

int main() 
{
    int n, sum=0;
    printf("Enter the number of elements : ");
    scanf("%d", &n);
    int a[n], i;
    for(i=0; i<n; i++)
    {
        printf("Enter the %dth element : ", i);
        scanf("%d", &a[i]);
    }
    for(i=0; i<n; i++)
    {
        sum = sum + a[i];
    }
    printf("\nSum of all array elements is : %d", sum);
    
    return 0;
}
