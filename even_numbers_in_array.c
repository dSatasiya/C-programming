// WAP to print all even numbers in arrray...

#include <stdio.h>

int even(int[], int);  // This is function declaration.
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
    even(a, n);
    return 0;
}

int even(int a[], int size)
{
    // int j;
    for(i=0; i<size; i++)
    {
        if(a[i]%2==0)
        {
            printf("%d is even number..\n", a[i]);
        }
    }
    // for(j=0; j<cnt; j++)
    // {
    //     printf("%d\t", even[j]);
    // }
}
