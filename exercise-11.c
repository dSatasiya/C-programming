// 64. Write a C program that accepts integers from the user until a zero or a negative number, display the number of positive values, the minimum value, the maximum value and the average of all numbers. Go to the editor

#include<stdio.h>

int main()
{
    int i, max, min, cnt=0, avg=0;
    int num[5] = {12, 23, 20, 10, 25};
    num[0] = max = min;
    for(i=0; i<5; i++)
    {
        // printf("Enter a positive number : ");
        // scanf("%d", &num);
        // num[] = max = min;
        if(num[i]>=max)
        {
            max=num[i];
        }
        if(num[i]<=min)
        {
            min=num[i];
        }
        avg = avg + num[i];
    }
    printf("Maximum number is : %d\n", max);
    printf("Minimum number is : %d\n", min);
    printf("The average of all numbers is : %d\n", avg);
    return 0;
}


// Input a positive integer:
// Input next positive integer: 15
// Input next positive integer: 25
// Input next positive integer: 37
// Input next positive integer: 43
// Number of positive values entered is 4
// Maximum value entered is 43
// Minimum value entered is 15
// Average value is 30.0000
