// Write a C program that accepts one seven-digit number and separates the number into its individual digits, and prints the digits separated from one another by two spaces each. 

#include<stdio.h>

int main()
{
    int num, rem, arr[7], i=0;
    printf("Enter a seven digit number : ");
    scanf("%d", &num);
    while(num!=0)
    {
        rem = num%10;
        arr[i] = rem;
        num = num/10;
        i++;
    }
    for(i=6; i>=0; i--)
    {
        printf("%d\t", arr[i]);
    }
    return 0;
}

// Sample Input: 2345678
// Input a seven digit number:
// Output: 2 3 4 5 6 7 8

// My output :
// Enter a seven digit number : 1236689
// 1	2	3	6	6	8	9
