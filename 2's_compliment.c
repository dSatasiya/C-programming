#include<stdio.h>
#include<conio.h>

int main()
{
    unsigned char firstChar;
    char secondChar;
    //int andResult = 0;
    //int orResult = 0;

    printf("Please enter the first character : ");
    scanf("%c", &firstChar);
    //printf("Please enter the second character : ");
    //scanf("%c", &secondChar);
    //printf("Number before Bitwise Not opertion : %d\n", firstChar);
    firstChar = ~(firstChar);
    firstChar = firstChar + 1;
    //firstChar = firstChar>>1;
    printf("Character after Bitwise Not opereaton : %c\n", firstChar);
    //andResult = firstChar & secondChar;
    //orResult = firstChar | secondChar;
    //printf("AND = %d , OR = %d", andResult, orResult);


    /*int num1;
    int num2;
    int num3;
    printf("Enter the first number : ");
    scanf("%d", &num1);
    printf("Enter the second number : ");
    scanf("%d", &num2);
    printf("Enter the third number : ");
    scanf("%d", &num3);*/

    return 0;
}
