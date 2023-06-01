// //===================================
//Author: Dhruv Satasiya
//Copyright: 2023 Fanshawe College
//Date: May 30, 2023
//Description: Investigation of arrayas, printf, scanf
//=================================

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<Windows.h>
#define MAXSAMPLES 100

float arr[MAXSAMPLES]; // Globally defined array

float findMinimumValue(void)
{
	float minValue = arr[0];
	for (int i = 1; i < MAXSAMPLES; i++)
	{
		if (arr[i] < minValue)
		{
			minValue = arr[i];
		}
	}

	return minValue;
}

float findMaxValue(void)
{
	float maxValue = arr[0];
	for (int i = 1; i < MAXSAMPLES; i++)
	{
		if (arr[i] > maxValue)
		{
			maxValue = arr[i];
		}
	}
	return maxValue;
}

float calculateAverage(void)   // when we write void that means function is not taking any information or parameters.
{
	float sum = 0.0f;   // what does 0.0f mean? 
	float average = 99.9;
	int i;
	for (i = 0; i < MAXSAMPLES; i++)
	{
		sum = sum + arr[i];
	}
	average = sum / MAXSAMPLES;
	return average;
}


int main()
{
	float range;
	float offset;

	float minValue = -99.9;
	float maxValue = -99.9;
	while (minValue<10.25 || minValue>100.00)
	{
		printf("Enter the minimum value between 10.25 and 100.00: ");
		scanf_s("%f", &minValue);
		int c;
		while((c = getchar()) != '\n' && c != EOF){}   

		//printf("The minimum value is: %f\n", minValue);
	}

	while (maxValue<100.01 || maxValue>500.00)
	{
		printf("Enter the maximum value between 100.01 and 500.00: ");
		scanf_s("%f", &maxValue);
		int c;

		// flush all ramaining character from the standard input buffer
		while ((c = getchar()) != '\n' && c != EOF) {}
	}

	//printf("The maximum value is: %f\n", maxValue);

	time_t seconds;      
	seconds = time(NULL); // what about this 2 lines.  
	srand((unsigned int)seconds);   // or directly srand(time(NULL))

	int i = 0;
	while (i<MAXSAMPLES)
	{
		range = maxValue - minValue;
		arr[i] = (rand() % (int)(range * 100) + (minValue * 100))/100.0;
		//printf("arr[%d] = %f\n", i, arr[i]);
		i++;	
	}
	float myAverage;
	myAverage = calculateAverage();

	float myMin;
	myMin = findMinimumValue();

	float myMax;
	myMax = findMaxValue();

	return 0;
}
