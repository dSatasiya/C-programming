//>>> Program Header >>>
/*>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
	File Name:	ELNC6006LAB7DS.c  <-- Change this according to conventions.
	Author:		Dhruv Satasiya
	Date:		04/07/2023
	Modified:	04/07/2023
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
		printf("\nEnter your choice or enter 'q' or 'Q' to exit : ");
		scanf(" %c", &choice);         // what buffer clearing ?
		int counter = 0;

		switch (choice)
		{
		case '1': printf("\nEnter the sentence : ");
			scanf("%s", stringArray);
			printf("%s", stringArray);   // Why is it not printing properly...
			break;

		case '2':
			while (stringArray[counter] != '\0')
			{
				if (stringArray[counter] != '\0')
				{
					counter++;
				}  // end of if 
			}// end of while
			printf("Counter is : %d", counter);
			break;

		case '3': printf("Performing 2's Compliment...");
			while(stringArray[counter] != '\0')
			{
				stringArray[counter] = ~(stringArray[counter]);
				stringArray[counter] = stringArray[counter] + 1;
				counter++;
			}// end of while
			printf("\nThe result is : %s", stringArray);
			break;

		default:
			break;
		}

	}

	return 0;	// returning argument in the main function is listed as an int, 
	// this 'return' command returns a value of 0 which is of int type
	// and is required in Visual Studio C++ source codes. 
} // eo main::*/
