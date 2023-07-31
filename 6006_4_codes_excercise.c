//==============================
// Author: Dhruv Satasiya
// Date: July 28th, 2023
// Descreption: Pulling all previous 3 excercise programs together...
//==============================

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

// GLobal Variables >>>>>>>>>>>>>>>>>>>>
#define LEN 50
#define MAGIC_LEN 100

// User Functions >>>>>>>>>>>>>>>>>>>>>>
// Author: Dhruv Satasiya
// Date: July 28th, 2023
// Description: This part of the code will reverse the word or sentence
//              enterd by the user.
// Input: It takes no arguments as an input.
// Return: It returns the reversed string of the user-input.

int reverseString()
{
    printf("Performing first code....\n");

    char arr[LEN] = {0};
    char reversed[LEN] = {0};

    printf("Enter one word or setence : ");
    scanf("%s", arr);

    printf("You have entered : %s", arr);
    int len = strlen(arr);
    int index1;
    int index2;
    for(index1 = len, index2 = 0 ; index2<len; index1--, index2++)
    {
        reversed[index2] = arr[index1-1];
    }
    printf("\nReversed name is : %s", reversed);

    printf("\n");
}

// User Functions >>>>>>>>>>>>>>>>>>>>>>
// Author: Dhruv Satasiya
// Date: July 28th, 2023
// Description: This part of the code will reverse the word or sentence
//              enterd by the user.
// Input: It takes no arguments as an input.
// Return: It returns the reversed string of the user-input.

int magicNumbers()
{
    printf("Performing second code....\n");
    
    printf("Random numbers...\n");

	int magicNumbers[MAGIC_LEN];
	int index;
	int min = 1;
	int max = 100;
	int range = max - min;
	for (index = 0; index < MAGIC_LEN; index++)
	{
		magicNumbers[index] = rand();
		magicNumbers[index] = magicNumbers[index] % range;
		magicNumbers[index] = magicNumbers[index] + min;
	}
	int totalTries = 4;
	//char control = '\0';
	char userGuess = '\0';
	
	while(userGuess != 'q')
	{
		
		for(int index = 0; index < totalTries; index++)
		{
			printf("Please guess total 10 numbers : ");
			scanf("%d", &userGuess);
		}
		printf("Enter 'q' to exit from the magic number code : ");
		scanf(" %c", &userGuess);
	}

    printf("\n");
}

// User Functions >>>>>>>>>>>>>>>>>>>>>>
// Author: Dhruv Satasiya
// Date: July 28th, 2023
// Description: This part of the code will reverse the word or sentence
//              enterd by the user.
// Input: It takes no arguments as an input.
// Return: It returns the reversed string of the user-input.

int selectMenu(void)
{
    printf("Performing third code ....\n");

    char choice = '\0';
    int choiceCount = 0;

    printf("------Menu-------\n");
    printf("1. Veg\n2. Non-Veg\n3. Soup\n4. Cold-drinks\n5. Desserts\n");

    while(choice != 'q')
    {
        printf("Select from the above menu : ");
        scanf(" %c", &choice);
        switch (choice)
        {
        case '1': 
            printf("You have seleceted Veg option \n");
            break;
        case '2': 
            printf("You have seleceted Non-Veg option \n");
            break;
        case '3': 
            printf("You have seleceted Soup option \n");
            break;
        case '4': 
            printf("You have seleceted Cold-drinks option \n");
            break;
        case '5': 
            printf("You have seleceted Desserts option \n");
            break;

        default:
            break;
        }
        choiceCount++;
        printf("Enter 'q' to end or 'c' to continue for Menu Selcetion: ");
        scanf(" %c", &choice);
    }
    printf("\nYou have made total %d selections..\n", choiceCount);

    printf("\nThank you! Visit again...");
    //printf("\n\n\n");

    printf("\n");
}

int main()
{
    char choice = '\0';

    while(choice != 'q')
    {
        printf("Choose from the list according to your wish....\n");
        printf("1. To reverse the entered sentence.\n");
        printf("2. To play the \"Magic Numbers\" game.\n");
        printf("3. To select your favourit food.\n");
        printf("Or enter 'q' to end : \n");
        scanf(" %c", &choice);
    
        switch (choice)
        {
        case '1':
            reverseString();
            break;
        case '2':
            magicNumbers();
            break;
        case '3':
            selectMenu();
            break;
        default:
            break;
        }
    }
    return 0;
}
