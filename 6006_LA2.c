/*
This code is to find the temperature value after getting the
user input voltage value based on below formula:
Y = mX + b <---- Linear equation 
where, Y = Input Voltage and
       X = Temperature (to be calculated)
So, by rearranging the formula...
    Temperature(X) = (Y - b) / m
*/

#include<stdio.h>

//================Global Variables ===========
#define SLOPE 0.0125
#define B 1.25
int main()
{
    char choice = '\0';
    float result = 0.0f;
    float userInput = 0.0f;

    while (choice  != 'X')
    {
        printf("Select form the below menu : \n");
        printf("A. To get the user value.\n");
        printf("B. To perform the linear equation.\n");
        printf("Or enter X to end\n");
        scanf(" %c", &choice);

        switch (choice)
        {
        case 'A':
            printf("Enter the value of Y between 0.0~5.0: ");
            scanf("%f", &userInput);
            while(userInput<0.0 || userInput>5.0)
            {
                printf("Input out of range, please try again : ");
                scanf("%f", &userInput);
            }
            break;
        case 'B':
            printf("Your value of Y is = %.2f", userInput);
            result = (userInput - B) / SLOPE;
            printf("\nThe calculated temperature is %.2f celsius\n", result);
            printf("\n");
        default:
            break;
        }
    }
    
}
