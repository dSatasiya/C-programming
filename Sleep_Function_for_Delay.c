// //===================================
//Author: Dhruv Satasiya
//Copyright: 2023 Fanshawe College
//Date: June 2, 2023
//Description: Practice of different libraries and random number generator..
//=================================

#include<stdio.h>
#include<windows.h>
#include<time.h>

int main()
{
	printf("Hello, I want to sleep for 2 seconds....\n");
	Sleep(2000);  // Sleep(time_in_milisecond) and note S is capital.
	printf("Wake up, your 2 seconds are done...\n");
	
	int i;
	for (i = 0; i < 50; i++)
	{
		printf("%d\n", i);
		Sleep(50);   // Delay of 0.05 seconds before printing the next number...
	}

	//time_t timer = time(NULL);
	//printf("Current time is %s", ctime(&timer));

	time_t seconds;     // Remmber time_t is nothing but a data type like int.
	seconds = time(NULL);

	printf("%d\n", seconds);

	return 0;
}
