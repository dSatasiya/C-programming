#include<stdio.h>



int countSum(int* arrayPtr)    // it is equvivalent to A[] as array is always called by reference,
{
    int sum = 0;
    //char size = 0;
    //size = sizeof(A) / sizeof(A[0]);       // Here the sizeof(A) menas the size of the 
                                             // pointer to integer array menas 4.

    /*for(index = 0; index < size; index++)
    {
        sum += A[index];
    }*/

    while((*arrayPtr) != '\0')
    {
        sum += (*arrayPtr);
        arrayPtr++;
    }
    return sum;
}

int main()
{
    int A[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, '\0'};
    int total = 0;
    //char size = 0;

    //size = sizeof(A) / sizeof(A[0]);    // Here sizeof(A) means the size of the 
                                         //entire array(20 in this case).

    total = countSum(A);

    printf("\nThe sumation of the array elements is : %d\n\n", total);

    return 0;

}
