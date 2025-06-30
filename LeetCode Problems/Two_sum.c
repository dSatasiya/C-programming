// Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

// You may assume that each input would have exactly one solution, and you may not use the same element twice.

#include <stdio.h>
#include <stdlib.h>

#define LEN  		4

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize) 
{
	int tempSum = 0;

	int *result = (int*)malloc(2 * sizeof(int));


    for(int indexOut = 0; indexOut < numsSize; indexOut++)
    {

    	for(int indexIn = 0; indexIn < numsSize; indexIn++)
    	{
    		if(indexIn != indexOut)
    		{
				tempSum = nums[indexOut] + nums[indexIn];
				if(tempSum == target)
				{
					result[0] = indexOut;
					result[1] = indexIn;

					*returnSize = 2;

					return result;
				}
    		}
    	}
    }

    return NULL; 				/*if no solution is found then return NULL*/

} //eo twoSum::


int main()
{	
	int nums[LEN] = {3, 3};
	int target = 6;
	int returnSize = 0;
	int *result = (int*)NULL;

	result = twoSum(nums, LEN, target, &returnSize);

	printf("[%d, %d]", result[0], result[1]);
	
	printf("\n\n");


} //eo main::
