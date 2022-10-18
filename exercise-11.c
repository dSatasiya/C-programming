// 64. Write a C program that accepts integers from the user until a zero or a negative number, display the number of positive values, the minimum value, the maximum value and the average of all numbers. Go to the editor

#include<stdio.h>

int main()
{
    int i, max, num, min, cnt=0, sum=0;
    float avg=0;
    // int num[5] = {23, 4, 56, 7, 22};
    max = 0;
    for(i=0;; i++)
    {
        printf("Enter a positive number : ");
        scanf("%d", &num);
        if(num>0)
        {
            if(num>=max)
            {
                max=num;
            }
            else if(num<=min)
            {
                min=num;
            }   
            sum = sum + num;
        }
        else
        {
            break;
        }
    }
    printf("Number of positive values entered is %d\n",i);
    printf("Maximum number is : %d\n", max);
    printf("Minimum number is : %d\n", min);
    avg = sum/5;
    printf("The average of all numbers is : %f\n", avg);
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


// Output which I got :
// Enter a positive number : 12
// Enter a positive number : 1
// Enter a positive number : 23
// Enter a positive number : 24
// Enter a positive number : 0
// Number of positive values entered is 4
// Maximum number is : 24
// Minimum number is : 1
// The average of all numbers is : 12.000000
