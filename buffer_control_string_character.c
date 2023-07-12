#include<stdio.h>
#include<conio.h>
//#pragma warning (disable : 4669)

#define STRLEN 100  // it is always a good practice to keep the size of the as maximum as possible,
					// because if we do not do so and enter the stirng bigger than the array size then
					// then it will not give or store anything in then array. 

int main()
{
	char arr[STRLEN];

	//printf("Enter the sentence : ");
	//scanf_s("%s", arr, STRLEN);

	//printf("Your sentence is : %s", arr);
	

	printf("Enter the sentence : ");
	scanf_s("%[^\n]s", arr, STRLEN);     // what does this formatting exactly mean for the scanf 
										 // input function while working with the strings. 

	printf("Your sentence is : %s", arr);

	/*char singleChar;

	printf("Enter only single characeter :");
	scanf_s(" %c", &singleChar);            // putting one white space before the %c placeholder will
											// flush the white space buffer and print the output properly.

	printf("your character is :%c", singleChar);*/

	/*char myChar;
	char myChar2;

	printf("Enter the first character :");
	myChar = getchar();				// Here you have to hit the new line character(enter) after
									// giving the character...

	printf("your first character is : %c", myChar);
	
	printf("\nEnter the second character : ");
	myChar2 = _getch();            // Here you do not have to hit the new line character(enter) after
								   // giving the character...it will automatically go to the new line..

	printf("\nyour second character is : %c", myChar2);*/

	return 0; 
}
