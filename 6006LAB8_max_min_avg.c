//>>> Program Header >>>
/*>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
	File Name:	ELNC6006DSLab8.c  <-- Change this according to conventions.
	Author:		Dhruv Satasiya
	Date:		18/07/2023
	Modified:	None
	© Fanshawe College, 2023

	Description: This code will prompt the user for the grades and perform some mathamatical operations
				 on it like minimum value, maximum value and average. 
>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>*/

// ANY and ALL comments that are not relevant to the program should be removed, including this one.

// Preprocessor >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

#include <stdio.h>

// Constants >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

#define COUNT 10

// Global Variables >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>


// Functions >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

	// >>> Function Header >>>
/*>>> functionName: >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
Author:		Satasiya Dhruv
Date:		18/07/2023
Modified:	None
Desc:		This function calculates the minimum, maximum and average of the grades.
Input: 		It takes the address of the grades array.
Returns:	It returns the calculated minimum, maximum and average of the grades.
>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>*/
int calculateScore(char* ptr)   // function to clculate the min, max and the average of the student score.
{
	char minVal = *ptr;
	char maxVal = *ptr;
	int sum = 0;
	float average = 0.0f;
	int index;
	//char* ptr;
	for (index = 0; index < COUNT; index++)
	{

		if (*ptr > maxVal)    // Calculating the max
		{
			maxVal = *ptr;
		}
		if (*ptr < minVal)    // Calculating the min
		{
			minVal = *ptr;
		}
		sum = sum + *ptr;
		ptr++;
	}
	average = sum / COUNT;    // Calculating the average
	//return maxVal, minVal, sum, average;
	printf("\nThe minimum value is : %d", minVal);
	printf("\nThe maximum value is : %d", maxVal);
	printf("\nThe Average is : %d", average);
	printf("\n");

} // eo functionName::


/*>>> MAIN: FUNCTION >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>*/
int main(void)	// <--- lists an int return type and no input arguments (void).
{

	char choice = '\0';
	char myGrades[COUNT] = { 0 }; // Creating the grades array

	while (choice != 'q' && choice != 'Q')
	{
		printf("Enter q or Q to exit");
		printf("\nor selcet from the below option");
		printf("\nA. Fill the array with test scores");
		printf("\nB. Calcualte and display min, max and average\n");
		scanf_s(" %c", &choice);
		printf("\n");

		int input;
		//char* ptr;
		int index;
		switch (choice)
		{
		case 'A':                                      // This case will prompt the user to fill the grades into the array.
			printf("Enter the test scores between 0~100: ");
			for (index = 0; index < COUNT; index++)
			{
				scanf_s("%d", &myGrades[index]);
				input = myGrades[index];
				while (input < 0 || input > 100)        // Checking the range of the input between 0~100
				{
					printf("Invalid Input, Enter again : ");
					scanf_s("%d", &myGrades[index]);
					break;
				}
			}
			break;

		case 'B':
			calculateScore(myGrades);					 //Calling the function to calculate the min, max and average
			break;

		default:									    // Default case for the invalid user input.
			printf("\nYou have made an invalid choice....");
			printf("\n");
			break;
		}
	}

	return 0;	// returning argument in the main function is listed as an int, 
				// this 'return' command returns a value of 0 which is of int type
				// and is required in Visual Studio C++ source codes. 
} // eo main::
