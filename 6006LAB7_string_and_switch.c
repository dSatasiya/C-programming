//>>> Program Header >>>
/*>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
	File Name:	ELNC6006LAB7DS.c  <-- Change this according to conventions.
	Author:		Dhruv Satasiya
	Date:		July 11. 2023
	Modified:	None
	© Fanshawe College, 2023

	Description: Promting the user to enter a sentence and performing some mathematical
				 operations.
>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>*/



#include <stdio.h>
#include<string.h>
#pragma warning (disable : 4996)
#define STRLEN 50


/*>>> MAIN: FUNCTION >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>*/
int main(void)	// <--- lists an int return type and no input arguments (void).
{
	// code for main function here
	char choice = NULL;
	char stringArray[STRLEN];

	while (choice != 'q' && choice != 'Q')
	{
		printf("\n");
		printf("\n1. To enter the sentence");
		printf("\n2. To perform math operation");
		printf("\nEnter your choice or enter 'q' or 'Q' to exit : ");
		scanf(" %c", &choice);     

		int counter = 0;

		switch (choice)
		{
			case '1': 
				printf("\nEnter the sentence : ");           // Prompting the user for the sentence..
				scanf("%s", &stringArray, STRLEN);
				//printf("%s", stringArray);   
				break;

			case '2':
				printf("Performing 2's Compliment...");     // Performing the math operation
				while (stringArray[counter] != '\0')
				{
					stringArray[counter] = ~(stringArray[counter]);  // Applying 2's Compliment
					stringArray[counter] = stringArray[counter] + 1;
					counter++;
				}// end of while loop
				printf("\nCounter is : %d", counter);
				printf("\nThe result is : %s", stringArray);
				break;

			default:
				break;
		}// end of switch

	}// end of while loop

	return 0;	// returning argument in the main function is listed as an int, 
	// this 'return' command returns a value of 0 which is of int type
	// and is required in Visual Studio C++ source codes. 
} // eo main::*/
