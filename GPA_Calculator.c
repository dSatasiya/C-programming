#include<stdio.h>

int main()
{
	int marks;
	printf("Enter the marks from 100: ");
	scanf_s("%d", &marks);

	if (marks < 0 || marks>100)
	{
		printf("The marks is out of the range...\n");
	}
	else
	{
		if (marks >= 90 && marks <= 100)
		{
			printf("Your GPA is 4.2\n");
		}
		if (marks >= 80 && marks <= 89)
		{
			printf("Your GPA is 4.0\n");
		}
		if (marks >= 75 && marks <= 79)
		{
			printf("Your GPA is 3.5\n");
		}
		if (marks >= 70 && marks <= 74)
		{
			printf("Your GPA is 3.0\n");
		}
		if (marks >= 65 && marks <= 69)
		{
			printf("Your GPA is 2.5\n");
		}
		if (marks >= 60 && marks <= 64)
		{
			printf("Your GPA is 2.0\n");
		}
		if (marks >= 55 && marks <= 59)
		{
			printf("Your GPA is 1.5\n");
		}
		if (marks >= 50 && marks <= 54)
		{
			printf("Your GPA is 1.0\n");
		}
		if (marks < 50)
		{
			printf("You have failed the course...\n\n\n");
		}
	}

	return 0;
}
