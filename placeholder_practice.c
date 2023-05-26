// Author: Dhruv satasiya
// This is the practice of the basics of 
// C programming language
// Date: May 15, 2023

#include<stdio.h>
#pragma warning(disable: 4996)

int main()
{
	printf("Helllo World....\n");
	int a = 10;
	float b = 2.5345;
	printf("%d\n", a);     //To print the normal value
	printf("%10d\n", a);   //To print the value with 8 white spaces
	printf("%010d\n", a);  //To print the value with 8 0 before the value
	printf("%8.2d\n", a); //To print the value with 8 white spaces and 2 after the value
	printf("%.2f\n", b);   //To print the floating number with 2 decimals
	printf("%6.2f\n", b);  //To print the floating number with 2 white spaces and 2 decimals. 

	// Remember, while playing with the place holders in the C, any number after the
	// % sign and before the dot sign is the total length of the integer or float to 
	// be displayed on the display. 

	printf("%p\n", &a);    //To print the address of the variable
	printf("%x\n", a);     //To print the hexadecimal value of the variable in small case
	printf("%X\n", a);     //To print the hexadecimal value of the variable on capital case
	printf("%o\n", a);     //To print the octal value in small case

	int counter;
	printf("Enter the number: ");
	scanf_s("%d", &counter);
	counter++;
	printf("Now counter contains: %d\n", counter);
	++counter;
	printf("Now counter contains: %d\n", counter);
	
	char initials = 'D';
	printf("%c\n", initials);

	char name[5] = "Dhruv"; // Directly assigning the name without {} method and without using
							// null character - '\0'
	printf("My name is: %s\n", name);

	char name1[6] = {'D', 'h', 'r', 'u', 'v', '\0'}; // Directly assigning the name with {} method
	printf("My name is: %s\n", name1);

	printf("%d\n", name1); // this line is going to print the address of name1 character array
						 // (which is nothing but the string). 

	printf("%c\n", name1[2]); // prints the 3rd character in array. 

	printf("%c\n", name1); // prints the random garbage value. 

	return 0;
}
