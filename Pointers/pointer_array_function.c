#include<stdio.h>

#define MAXSAMPLES 5
int arr[MAXSAMPLES];

int findMaximumValue()
{
	int maxValue = arr[0];
	int i;
	for (i = 0; i < MAXSAMPLES; i++)
	{
		int* ptr = &arr[i];
		if (*ptr > maxValue)
		{
			maxValue = *ptr;
		}
	}
	return maxValue;
}

int findMinimumValue()
{
	int minValue = arr[0];
	int i;
	for (i = 0; i < MAXSAMPLES; i++)
	{
		int* ptr = &arr[i];
		if (*ptr < minValue)
		{
			minValue = *ptr;
		}
	}
	return minValue;
}

int findSum()
{
	int i;
	int sum = 0;
	for (i = 0; i < MAXSAMPLES; i++)
	{
		int* ptr = &arr[i];
		sum = sum + *ptr;
	}
	return sum;
}

int main()
{
	
	int* ptrToIntArr;
	ptrToIntArr = arr;
	int i = 0;

	while (i < MAXSAMPLES)
	{
		ptrToIntArr = &arr[i];
		printf("Enter the element %d of array : ", i);
		scanf_s("%d", ptrToIntArr);
		i++;
	}

	printf("\n\n");

	printf("The initial address of the array is : %p\n", arr);
	printf("The address of array by pointer is : %p\n", ptrToIntArr);
	printf("The first element of the array is : %d\n", arr[0]);
	printf("The last element of the array by pointer is : %d\n", *ptrToIntArr);
	printf("\n\n");

	for (i = 0; i < MAXSAMPLES; i++)
	{
		ptrToIntArr = &arr[i];
		printf("The element %d of array is : %d\n", i, *ptrToIntArr);
	}

	printf("\n\n");
	char characterArray[6] = "Dhruv";
	int* ptrToCharArr;
	for (i = 0; i < MAXSAMPLES; i++)
	{
		ptrToCharArr = &characterArray[i];
		printf("Character - %d of my name is : %c\n", i + 1, *ptrToCharArr);

	}

	printf("\n\n");

	int myMax;
	myMax = findMaximumValue();
	printf("The maximum number in array is : %d\n\n", myMax);
	
	int myMin;
	myMin = findMinimumValue();
	printf("The minimum number in array is : %d\n\n", myMin);

	int mySum;
	mySum = findSum();
	printf("The sum of the array is : %d\n\n", mySum);

	return 0;
}
