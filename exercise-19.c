// WAP to print the 1 to 100 numbers but there should be only 10 numbers in a single line
// using proper spacing and it will be total 10 rows with 10 numbers. 

#include<stdio.h>

int main()
{
	int x = 1;
	int modifier = 10;
	int maxValue = 101;
	while (modifier < maxValue)
	{
		while (x <= modifier)
		{
			printf("%d\t", x);
			x++;
		}
		printf("\n");
		modifier = modifier + 10;
	}
	return 0;
}

// Expected output....
/*1 2 3 4 5 6 7 8 9 10
11 12 13 14........
....................
............98 99 100*/
