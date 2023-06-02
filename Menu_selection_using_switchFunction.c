//=================================================
// Author: Dhruv Satasiya
// Date: June 1, 2023
// Fanshawe College, London
// Description: Making use of Switch function in C.
//=================================================

#include<stdio.h>

int main()
{
	printf("----- Menu -------\n");
	printf("1. Sabji-Roti\n2. Dal Makhani\n3. Buttermilk\n4. Jeera Rice\n");
	printf("Enter the menu number: ");
	int menuNumber;
	scanf_s("%d", &menuNumber);

	switch (menuNumber)
	{
	case 1: printf("You have selected Sabji-Roti\n");
		break;
	case 2: printf("You have selected Dal Makhani\n");
		break;
	case 3: printf("You have selected Buttermilk\n");
		break;
	case 4: printf("You have selected Jeera Rice\n");
		break;
	// how to select 2 menus. 
	default: printf("\nPlese!Select the valid number.");
		break;
	}
	return 0;
}
