#include<stdio.h>

int main()
{
	int arr[5] = { 1,2,3,4,5 };
	int* ptrToIntArr;
	ptrToIntArr = arr;

	printf("The initial address of the array is : %p\n", arr);
	printf("The address of array by pointer is : %p\n", ptrToIntArr);
	printf("The first element of the array is : %d\n", arr[0]);
	printf("The first element of the array by pointer is : %d\n", *ptrToIntArr);

	int i;
	for (i = 0; i < 5; i++)
	{
		ptrToIntArr = &arr[i];
		printf("The element %d of array is : %d\n", i, *ptrToIntArr);
	}

	char characterArray[6] = "Dhruv";
	int* ptrToCharArr;
	for (i = 0; i < 5; i++)
	{
		ptrToCharArr = &characterArray[i];
		printf("Character - %d of my name is : %c\n", i+1, *ptrToCharArr);
		
	}

	return 0;
}
