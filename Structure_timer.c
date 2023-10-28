#include<stdio.h>

typedef struct
{
	int second;
	int minute;
	int hour;
}clock_t;

int main()
{
	clock_t time;
	time.second = 0;
	time.minute = 0;
	time.hour = 0;

	printf("Enter the total seconds : ");
	scanf_s("%d", &time.second);
	
	if (time.second >= 60)
	{
		time.minute = time.second / 60;
		time.second = time.second % 60;
	}
	if (time.minute >= 60)
	{
		time.hour = time.minute / 60;
		time.minute = time.minute % 60;
	}

	printf("\nHours = %d, Minutes = %d and Seconds = %d", time.hour, time.minute, time.second);
	
	return 0;
}
