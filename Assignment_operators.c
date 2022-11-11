
#include<stdio.h>

int main()
{
    int a=5, b=6;
    printf("\n a = %d", a);
    // a += 1;  // a = a +1;
    // b |= 1;  // b = b | 1; 
    // b &= 1; // b = b & 1; 
    a |= b; // a = a | b;
    printf("\na = %d", a);
    printf("\nb = %d", b);
    return 0;
}
