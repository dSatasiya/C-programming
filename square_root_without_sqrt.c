// Write a C program to find the square root of given number without SQRT in-built function.
// this program is only working for one number(16).

#include <stdio.h>

int main() 
{
    int num = 16;
    // printf("Enter the number : ");
    // scanf("%d", &num);
    int cnt=0, result=0, srt=0;
    while(num!=0)
    {
        if(num%2==0)
        {
            cnt = cnt + 1;
        }
        num = num/2;
    }
    // printf("%d", cnt);
    srt = 2*(cnt/2);
    printf("\nSquare root of %d is = %d", num, srt);

    return 0;
}
