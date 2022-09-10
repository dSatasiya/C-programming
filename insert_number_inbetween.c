// WAP to insert an element at a given location in array.
// Most IMP code..........
#include <stdio.h>

int main() 
{
    int n, loc, num, i;
    printf("Enter a number of digits : \n");
    scanf("%d", &n);
    int a[n];
    for(i=0; i<n; i++)
    {
        printf("Enter the %dth index value : ", i);
        scanf("%d", &a[i]);
    }
    printf("Enter the numbe to be inserted : ");
    scanf("%d", &num);
    printf("Enter the location : ");
    scanf("%d", &loc);
    for(i=n-1; i>=loc-1; i--)
    {
        a[i+1] = a[i];
    }
    a[loc] = num;
    printf("\nNew array is ....");
    for(i=0; i<n+1; i++)
    {
        printf("%d\t", a[i]);
    }
    
    return 0;
}
