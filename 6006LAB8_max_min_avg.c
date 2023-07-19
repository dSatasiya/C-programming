//>>> Program Header >>>
/*>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
	File Name:	ELNC6006DSLab8.c  <-- Change this according to conventions.
	Author:		Dhruv Satasiya
	Date:		18/07/2023
	Modified:	None
	© Fanshawe College, 2023

	Description: 	Describe the purpose of the main function.  What the program
			does and why. What platform (hardware part number) and / or
			supplemental documents required for the program’s use.
			Describe any supporting information (schematic, programming
			environment, ect..).
>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>*/

// ANY and ALL comments that are not relevant to the program should be removed, including this one.

// Preprocessor >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

#include <stdio.h>

// Constants >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

#define COUNT 10

// Global Variables >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
char myGrades[COUNT] = { 0 };
int index;
// Functions >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

	// >>> Function Header >>>
/*>>> functionName: >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
Author:		Satasiya Dhruv 
Date:		18/07/2023
Modified:	None
Desc:		Specifically, what does this function do?
Input: 		None or dataType variableName, why this input is needed / what is its use
Returns:	None or datatype, what is the data / what is its meaning
>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>*/
int calculateScore(void)
{
	char minVal = myGrades[0];
	char maxVal = myGrades[0];
	int sum = 0;
	float average = 0.0f;
	char* ptr;
	for (index = 0; index < COUNT; index++)
	{
		ptr = &myGrades[index];     // Assigning the address of value every time to the character pointer.

		if (*ptr > maxVal)
		{
			maxVal = *ptr;
		}
		if (*ptr < minVal)
		{
			minVal = *ptr;
		}
		sum = sum + *ptr;
	}
	average = sum / (float)COUNT;             // Not converting COUNT into float will give integer value
											  // of the average.
	//return maxVal, minVal, sum, average;
	printf("\nThe minimum value is : %d", minVal);
	printf("\nThe maximum value is : %d", maxVal);
	printf("\nThe Sumation is : %d", sum);
	printf("\nThe Average is : %.2f", average);
	printf("\n");

} // eo functionName::


/*>>> MAIN: FUNCTION >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>*/
int main(void)	// <--- lists an int return type and no input arguments (void).
{

	char choice = '\0';

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

		switch (choice)
		{
		case 'A':
			printf("Enter the test scores between 0~100: ");
			for (index = 0; index < COUNT; index++)
			{
				scanf_s("%d", &myGrades[index]);
				input = myGrades[index];
				while (input < 0 || input > 100)
				{
					printf("Invalid Input, Enter again : ");
					scanf_s("%d", &myGrades[index]);
					break;
				}
			}
			break;

		case 'B':
			calculateScore();
			break;

		default:
			printf("\nYou have made an invalid choice....");
			printf("\n");
			break;
		}
	}

	return 0;	// returning argument in the main function is listed as an int, 
	// this 'return' command returns a value of 0 which is of int type
	// and is required in Visual Studio C++ source codes. 
} // eo main:
