//Write a C program to read an amount (integer value) and break the amount into smallest possible number of bank notes. 

#include<stdio.h>

int main()
{
    int amount=0, two_k=0, five_hun=0, two_hundred=0, hundred=0, fifty=0, ten=0, five=0;
    printf("Enter the total amount : ");
    scanf("%d", &amount);
    while(amount >= 2000)
    {
        amount = amount - 2000;
        two_k++;
    }
    printf("Total note(s) of 2000 = %d\n", two_k);
    while(amount >= 500)
    {
        amount = amount - 500;
        five_hun++;
    }
    printf("Total note(s) of 500 = %d\n", five_hun);
    while(amount >= 200)
    {
        amount = amount - 200;
        two_hundred++;
    }
    printf("Total note(s) of 200 = %d\n", two_hundred);
    while(amount >= 100)
    {
        amount = amount - 100;
        hundred++;
    }
    printf("Total note(s) of 100 = %d\n", hundred);
    while(amount >= 50)
    {
        amount = amount - 50;
        fifty++;
    }
    printf("Total note(s) of 50 = %d\n", fifty);
    while(amount >= 10)
    {
        amount = amount - 10;
        ten++;
    }
    printf("Total note(s) of 10 = %d\n", ten);
    while(amount >= 5)
    {
        amount = amount - 5;
        five++;
    }
    printf("Total note(s) of 5 = %d\n", five);
    
    return 0;
}
