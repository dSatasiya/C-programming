
/*
Question:
You are given a large integer represented as an integer array digits, where each digits[i] is the ith digit of the integer. 
The digits are ordered from most significant to least significant in left-to-right order. 
The large integer does not contain any leading 0's.

Increment the large integer by one and return the resulting array of digits.

*/

#include <stdio.h>
#include <stdlib.h>

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* plusOne(int* digits, int digitsSize, int* returnSize) 
{	
	int tempIndex = 0;

	if(digitsSize > 1)
	{
		tempIndex = (digitsSize - 1);
		digits[tempIndex]++;	

		(*returnSize) = digitsSize;
	}  
	else if(digitsSize == 1)
	{
		tempIndex = (digitsSize - 1);
		digits[tempIndex]++;

		digits[1] = digits[tempIndex] % 10; 
		digits[0] = digits[tempIndex] / 10;
			
		(*returnSize) = digitsSize + 1;
	}
	else
	{
		return NULL;
	}
	
	int *result = (int*)malloc((*returnSize) * sizeof(int));

	result = digits;

	return result;

} //eo plusOne::

int main()
{
	int digits[5] = {1, 4, 6};
	int digitsSize = 0;
	int index = 0;
	int returnSize = 0;
	int *result = (int*)NULL;

	do
	{
		// printf("%d\n", digits[index]);
		if(digits[index] != 0)
		{
			digitsSize++;
		}
		index++;
	}while(index < 5);

	index = 0;

	// printf("%d\n", digitsSize);

	returnSize = digitsSize;

	// printf("%d\n", returnSize);

	result = plusOne(digits, digitsSize, &returnSize);

	printf("[");
	for(index = 0; index < returnSize; index++)
	{
		if(index == (returnSize-1))
		{
			printf("%d]", result[index]);
		}
		else
		{
			printf("%d, ", result[index]);
		}
	}

	return 0;
} //eo main::



/*
//*************GPT code***********
	int carry = 1;
    int index;

    int* result = (int*)malloc((digitsSize + 1) * sizeof(int));

    for (index = digitsSize - 1; index >= 0; index--) {
        int sum = digits[index] + carry;
        result[index + 1] = sum % 10;
        carry = sum / 10;
    }

    if (carry) {
        result[0] = 1;
        *returnSize = digitsSize + 1;
    } else {
        // Shift result array to remove leading 0
        for (index = 0; index < digitsSize; index++) {
            result[index] = result[index + 1];
        }
        *returnSize = digitsSize;
    }

    return result;


*/
