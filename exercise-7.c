// Q - 49 Write a C program to read and print the elements of an array of length 7, before print, put the triple of the previous position starting from the second position of the array.

#include<stdio.h>

int main()
{
    int i, num;
    printf("Enter the first number of the array : ");
    scanf("%d", &num);
    int arr[num];
    for(i=0; i<num; i++)
    {
        arr[0] = 5;
        arr[i+1] = arr[i]*3;
        printf("a[%d] = %d\n", i, arr[i]);
    }
    return 0;
}

//Expected Output:
// n[0] = 5
// n[1] = 15
// n[2] = 45
// n[3] = 135
// n[4] = 405
