// =========Important Note============
// This code is not fully functional and it needs to be modified for higher numbers to convert into the binary...

//===================================
//This code will only print the binary conversion of the numbers between 0 and 15
//===================================

#include<stdio.h>

int main()
{
	int decimalNum = 10; // Expected output is binary number of decimalNum.
	int binaryNum = 0;
	int processNum = 0;
	//int len = 4;
	int tempArray[4] = { 0 };
	int len = 0;
	while (decimalNum != 1)
	{
		
		binaryNum = decimalNum % 2;
		decimalNum = decimalNum / 2;

		//printf("%d", binaryNum);
		tempArray[len] = binaryNum;
		len++;
		if (decimalNum == 1)
		{
			tempArray[len] = decimalNum;
		}
	}
	int i;
	//int binaryVal;
	for (i = len; i >= 0; i--)
	{
		printf("%d", tempArray[i]);
		
		//binaryVal = tempArray[i];
	}

	//printf("Binary of %d is = %d\n\n", decimalNum, binaryVal);
	//printf("%d\n", decimalNum);
	//binaryNum = decimalNum;
	//printf("%d\n", binaryNum);

	return 0;
}
