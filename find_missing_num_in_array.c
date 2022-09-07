// Write a program in C, In array 1-100 numbers are stored and one number is missing, how do you find that which number is missing?..

#include <stdio.h>

int main() 
{
    int a[10] = {1,2,3,4,6,7,8,9,10};
    int i;
    for(i=0; i<=8; i++)
    {
        if((a[i+1]-a[i])!=1)
        {
            printf("\nOne number is missing..");
            printf("\nMissing numbers is %d", a[i]+1);
            break;
        }
        continue;
    }
    return 0;
}


// Please note that this program is not user controlled. As it only worls for given input.
