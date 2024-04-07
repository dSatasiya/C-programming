#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

#define LEN 5

int main()
{
    int* ptr;

    ptr = (int*)malloc(sizeof(int));

    if(ptr == NULL)
    {
        printf("Sorry! Unable to allocate the memory");
        exit(0);
    }

    printf("\n%d\n", ptr);
    
    printf("\nEnter the elements of array:\n");
    for(int i = 0; i <LEN; i++)
    {
        scanf("%d\n", ptr + i);
    }

    printf("The entered elements of the arrays are:\n");
    for(int j = 0; j < LEN; j++)
    {
        printf("%d\t", *(ptr + j));
    }

    return 0;
}
