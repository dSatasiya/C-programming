// This is the code in C about how to include the delay between the execution of the two lines.

#include<stdio.h>
#include<windows.h>

int main()
{
	printf("Hello, I want to sleep for 5 seconds....\n");
	Sleep(5000);  // Sleep(time_in_milisecond) and note S is capital.
	printf("Wake up, your 5 seconds are done...\n");
	
	int i;
	for (i = 0; i < 50; i++)
	{
		printf("%d\n", i);
		Sleep(50);   // Delay of 0.5 seconds before printing the next number...
	}
	return 0;
}
