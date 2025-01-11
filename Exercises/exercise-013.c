// Write a C program to print the powers of 2 table for the power 0 to 10, both positive and negative.

#include<stdio.h>
#include<math.h>

int main()
{
    int power=2, val_pos=0, i, j;
    float val_neg=0;
    for(i=0, j=0; i<=10; i++, j--)
    {
        val_pos = pow(power, i);
        val_neg = pow(power, j);
        printf("%d  %d  %f \n", i, val_pos, val_neg);
    }
    return 0;
}

// Expected Output :
// 0  1  1.000000 
// 1  2  0.500000 
// 2  4  0.250000 
// 3  8  0.125000 
// 4  16  0.062500 
// 5  32  0.031250 
// 6  64  0.015625 
// 7  128  0.007812 
// 8  256  0.003906 
// 9  512  0.001953 
// 10  1024  0.000977 
