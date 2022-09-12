// WAP to merge two arrays..

#include<stdio.h>

int main()
{
    int n1, n2;
    printf("Enter the size of first array : ");
    scanf("%d", &n1);
    printf("Enter the size of second array : ");
    scanf("%d", &n2);
    int a[n1];
    int b[n2];
    int i;
    printf("\n First array is.....\n");
    for(i=0; i<n1; i++)
    {
        printf("%dth element : ", i);
        scanf("%d", &a[i]);
    }
    printf("\n Second array is....\n");
    for(i=0; i<n2; i++)
    {
        printf("%dth element : ", i);
        scanf("%d", &b[i]);
    }
    int merged_size = n1+n2;
    int merged_arr[merged_size];
    printf("\n Merged array is....\n");
    for(i=0; i<n1; i++)
    {
        merged_arr[i] = a[i];
    }
    int j;
    for(i=n1,j=0; i<merged_size; i++,j++)
    {
        merged_arr[i] = b[j];
    }
    for(i=0; i<merged_size; i++)
    {
        printf("%d\t", merged_arr[i]);
    }
    return 0; 
}
