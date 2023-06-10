// //===================================
//Author: Dhruv Satasiya
//Copyright: 2023 Fanshawe College
//Date: June 6, 2023
//Description: Stirng Investigation
//=================================

// The name of the array is nothing but the starting address of the array or string. 

#include<stdio.h>
#include<string.h>

int main()
{
	//==============================definig the character array and displaying it ===========
	/*char message1[130] = "test 123";
	char message2[30] = "this is the garbage message";
	//printf("%p", message1);
	int i = 0;
	while (message1[i] != '\0')
	{
		message2[i] = message1[i];
		i++;
	}
	message2[i] = '\0';
	printf("message 1 is = %s\n", message1);
	printf("message 2 is = % s\n", message2);*/

	//============================Reversing of the string======================
	/*char reverseMe[100];
	printf("\nEnter the name: ");
	gets(reverseMe);

	char temp;
	int end = 0;
	int start = 0;
	while (reverseMe[end] != '\0')
	{
		end++;
	}
	end--;
	while (start < end)
	{
		temp = reverseMe[start];
		reverseMe[start] = reverseMe[end];
		reverseMe[end] = temp;
		start++;
		end--;
	}

	printf("%s\n", reverseMe);

	char name[10];
	
	int i;
	for (i = end; i <= 0; i++)
	{
		printf("%c", reverseMe[i]);
	}*/
	//=====================Counting the number of vowel in the string======================
	/*char array[100];
	printf("Enter the string: ");
	gets(array);
	int vowel[6] = {0,0,0,0,0,0};
	int i = 0;
	while (array[i] != '\0')
	{
		if (array[i] == 'A' || array[i] == 'a')
		{
			vowel[0]++;
		}
		if (array[i] == 'E' || array[i] == 'e')
		{
			vowel[1]++;
		}
		if (array[i] == 'I' || array[i] == 'i')
		{
			vowel[2]++;
		}
		if (array[i] == 'O' || array[i] == 'o')
		{
			vowel[3]++;
		}
		if (array[i] == 'U' || array[i] == 'u')
		{
			vowel[4]++;
		}
		if (array[i] == 'Y' || array[i] == 'y')
		{
			vowel[4]++;
		}
		else
		{
			i++;
			continue;
		}
		
	}
	printf("Vowel: \t\tA\tE\tI\tO\tU\tY\t");
	printf("\noccurance:\t");
	int j;
	for(j = 0; j<6; j++)
	{
		printf("%d\t", vowel[j]);
	}*/

	// ===========Extra Line of code for direct integer value=========
	//int arr[5] = { 2, 4, 5, 2, 5 };
	//int num;
	//printf("Enter the number: ");
	//scanf_s("%d", &num);
	//int cnt = 0;
	//while (num != 0)
	//{
		//num = num / 10;
		//cnt++;
	//}
	/*int arrayNum = 0;
	int arr[5] = {0};
	int k=0;
	while (num != 0)
	{
		arrayNum = num % 10;
		arr[k] = arrayNum;
		num = num / 10;
		k++;
	}*/
	//============================================================

	//=========Counte the occurance of the digit (Home Work question)==================
	char arr[30];
	printf("Enter the number: ");
	gets(arr);
	int counter[10] = {0};
	
	int arrayLen = sizeof(arr) / sizeof(arr[0]);
	int i = 0;
	while (i != arrayLen)
	{
		if (arr[i] == '0')
		{
			counter[0]++;
		}
		if (arr[i] == '1')
		{
			counter[1]++;
		}
		if (arr[i] == '2')
		{
			counter[2]++;
		}
		if (arr[i] == '3')
		{
			counter[3]++;
		}
		if (arr[i] == '4')
		{
			counter[4]++;
		}
		if (arr[i] == '5')
		{
			counter[5]++;
		}
		if (arr[i] == '6')
		{
			counter[6]++;
		}
		if (arr[i] == '7')
		{
			counter[7]++;
		}
		if (arr[i] == '8')
		{
			counter[8]++;
		}
		if (arr[i] == '9')
		{
			counter[9]++;
		}
		else
		{
			i++;
			continue;
		}
	}

	printf("\nNumbers: \t0\t1\t2\t3\t4\t5\t6\t7\t8\t9");
	printf("\nCounters:");
	int j;
	for (j = 0; j < 10; j++)
	{
		printf("\t%d", counter[j]);
	}

	printf("\n\n\n");

	return 0;
}
