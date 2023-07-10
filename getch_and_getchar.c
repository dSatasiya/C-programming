//========================================
// Author: Dhruv H. Satasiya
// Descreption: This code fundamentally illustrates the difference between
//              getch() and getchar() function in C.
// Date: July 10, 2023
//========================================

#include<stdio.h>
#include<conio.h>

int main()
{
    int firstChar;
    int secondChar;
    printf("Please enter one character : ");
    firstChar = getch();  // getch() function will not show the characters while
                          // entering it, but it will directly store them into
                          // the momory. Hence, this could mainly be used in password
                          // mechanism. Moreover, it will also take enter automatically.
    printf("*");
    printf("\nYou have enterd \'%c\' character and its ASCII value is %d \n", firstChar, firstChar);

    printf("\nPlease enter the second character : ");
    secondChar = getchar(); // Whereas, getchar() function does show the characters
                            // being entered by the user and simultaniously stores
                            // the characters into the memory. Here, we have to hit
                            // the enter from the keyboard.
    printf("Your second character is \'%c\' character and its ASCII value is %d \n", secondChar, secondChar);

    /*char string[7];
    int counter;
    printf("\nPlease enter your name : ");
    for(counter = 0; counter < 7; counter++)
    {
        string[counter] = getchar();
    }
    string[6] = '\0';
    
    printf("\nName is : %s", string);*/

    char passwordArray[10];
    int counter;
    printf("\nPlease enter your password below:\n");
    for(counter = 0; counter < 10; counter++)
    {
        passwordArray[counter] = getch();
        printf("*");
    }
    passwordArray[9] = '\0';
    printf("\nPassword is : %s", passwordArray);

    return 0;
}
