//50. Write a C program to read an array of length 5 and print the position and value of the array elements of value less than 5.

#include<stdio.h>

int main()
{
    int len, i;
    printf("Enter the lenght of an array : ");
    scanf("%d", &len);
    int arr[len];
    for(i=0; i<len; i++)
    {
        scanf("%d", &arr[i]);
    }
    for(i=0; i<len; i++)
    {
        if(arr[i]<5)
        {
            printf("a[%d] = %d", i, arr[i]);
        }
    }
    return 0;
}

// Input the 5 members of the array:
// 15
// 25
// 4
// 35
// 40
// Expected Output:
// A[2] = 4.0
