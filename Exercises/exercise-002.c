// Write a C program that accepts some integers from the user and find the highest value and the input position.
#include<stdio.h>

int main()
{
    int max[5], i;
    for(i=0; i<5; i++)
    {
        printf("Enter the %dth array element : ", i);
        scanf("%d", &max[i]);
    }
    int maximum = max[0], position = 0;
    for(i=0; i<5; i++)
    {
        if(maximum < max[i])
        {
            maximum = max[i];
            position = i;
        }
    }
    printf("Highest value : %d\n", maximum);
    printf("Position : %d\n", position+1);
    return 0;
}
