// WAP to print all odd numbers in arrray...

#include <stdio.h>

int odd(int[], int);  // This is function declaration.
int i;
int main() 
{
    int n;
    printf("Enter the number of elements : ");
    scanf("%d", &n);
    int a[n];
    for(i=0; i<n; i++)
    {
        printf("Enter the %dth element : ", i);
        scanf("%d", &a[i]);
    }
    odd(a, n);
    return 0;
}

int odd(int a[], int size)
{
    // int j;
    for(i=0; i<size; i++)
    {
        if(a[i]%2!=0)
        {
            printf("%d is odd number..\n", a[i]);
        }
    }
    // for(j=0; j<cnt; j++)
    // {
    //     printf("%d\t", even[j]);
    // }
}
