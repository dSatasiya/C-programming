// perform the left rotation of array otwo time..
// It means if a = {1,2,3,4,5}
// then after performing one time left rotation array will become a = {2,3,4,5,1}

#include <stdio.h>

int main() 
{
    int n, i;
    printf("Enter the number of elements : ");
    scanf("%d", &n);
    int a[n];
    int rot[n];
    for(i=0; i<n; i++)
    {
        printf("\nEnter the %dth element : ", i);
        scanf("%d", &a[i]);
    }
    for(i=0; i<n; i++)
    {
        if(i==n-1)
        {
            rot[n-1] = a[1];
            break;
        }
        if(i==n-2)
        {
            rot[n-2] = a[0];
            continue;
        }
        rot[i] = a[i+2];
    }
    printf("\nAfter rotating the array left side and 1 time..\n");
    for(i=0; i<n; i++)
    {
        printf("%d\t", rot[i]);
    }
}
