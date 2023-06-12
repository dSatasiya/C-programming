#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>
#include<time.h>


#define MAXSAMPLES 20

int main()
{
	float minLen = -99.9;
	float maxLen = -99.9;

	while (minLen < 250 || minLen > 820) 
	{
		printf("Enter the minimum value between 250 and 820: ");
		scanf_s("%f", &minLen);
		int c;
		while ((c = getchar()) != '\n' && c != EOF)
		{

		}
	}

	while (maxLen < 2000 || maxLen > 4000)
	{
		printf("Enter the maximum value between 2000 and 4000: ");
		scanf_s("%f", &maxLen);
		int c;
		while ((c = getchar()) != '\n' && c != EOF)
		{

		}
	}

	//int j = 0;
	int lenArr[MAXSAMPLES] = { 0 }; 
	int areaArr[MAXSAMPLES] = { 0 };
	int i = 0;

	time_t seconds;
	seconds = time(NULL);
	srand((unsigned int)seconds);

	float range = 0;
	range = maxLen - minLen;

	printf("\n\n");
	printf("Calculated Areas:\n");

	while (i < MAXSAMPLES)
	{
		//arr[i] = (int)rand()/100 + range;
		lenArr[i] = rand();
		lenArr[i] = lenArr[i] % (int)(range * 100);
		lenArr[i] = lenArr[i] + (minLen * 100);
		lenArr[i] = lenArr[i] / 100.0;

		areaArr[i] = lenArr[i] * lenArr[i];
		printf("Square: %5d by %5d Area: %10d\n", lenArr[i], lenArr[i], areaArr[i]);

		i++;
	}

	printf("\n\n");
	printf("Statistics:\n");

	i = 0;
	float myMax = areaArr[0];
	float myMin = areaArr[0];
	float myAverage = 0.0f;
	while (i < MAXSAMPLES)
	{
		
		if (areaArr[i] > myMax)
		{
			myMax = areaArr[i];
		}
		
		if (areaArr[i] < myMin)
		{
			myMin = areaArr[i];
		}
		
		int sum = 0;
		for (int j = 0; j < MAXSAMPLES; j++)
		{
			sum = sum + areaArr[j];
		}
		myAverage = sum / MAXSAMPLES; 
		i++;
		
	}
	printf("Minimum Area: %5.2f sq. meters\n", myMin);
	printf("Maximum Area: %5.2f sq. meters\n", myMax);
	printf("Average Area: %5.2f sq. meters\n", myAverage);
		
	printf("\n\n");
	printf("Complete!\n\n");

	return 0;
}
