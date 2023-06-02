// //===================================
//Author: Dhruv Satasiya
//Copyright: 2023 Fanshawe College
//Date: May 30, 2023
//Description: Investigation of arrayas, printf, scanf self practice. 
//=================================

#include<stdio.h>
#define MAXSAMPLES 5

int myArr[MAXSAMPLES];

float calculateAvg(void);   // These are all the function declaration. 
int findMinValue(void);
int findMaxValue(void);

// Calculating the average of the array...
float calculateAvg()   // This is function definition or the functionality of the function
{
	int i;
	float sum = 0.0f;
	for (i = 0; i < MAXSAMPLES; i++)
	{
		sum = sum + myArr[i];
	}
	float average;
	average = sum / MAXSAMPLES;

	return average;
}

// Finding the maximum value in the array...
int findMinValue()
{
	int minValue = myArr[0];
	int i = 0;
	while (i < MAXSAMPLES)
	{
		if (myArr[i] < minValue)
		{
			minValue = myArr[i];
		}
		i++;
	}
	return minValue;
}

// Finding the maximum value of the array...
int findMaxValue()
{
	int maxValue = myArr[0];
	int i = 0;
	while (i < MAXSAMPLES)
	{
		if (myArr[i] > maxValue)
		{
			maxValue = myArr[i];
		}
		i++;
	}
	return maxValue;
}

int main()
{
	//int myArr[MAXSAMPLES]; // This is locally defined array, but we have to define it
							  // golbally as we want to access it in other functions too

	int i = 0;
	//int myArr[MAXSAMPLES] = {2, 45, 34, 12, 8};
	while (i<MAXSAMPLES)
	{
		//myArr[i] = i;
		printf("Enter the element number %d : ", i);
		scanf_s("%d", &myArr[i]);
		i++;
	}

	float myAverage;
	myAverage = calculateAvg();

	int myMin;
	myMin = findMinValue();

	int myMax;
	myMax = findMaxValue();
	//printf("Maximum Value is : %d\n", myMax);

	return 0;
}
