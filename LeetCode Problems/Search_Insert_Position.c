/*
	LeetCode Q: 35 (C/Easy)
	Question: Given a sorted array of distinct integers and a target value, 
	return the index if the target is found. 
	If not, return the index where it would be if it were inserted in order.
*/

#include <stdio.h>
#include <stdlib.h>

/*****Functions Prototype*******/
int searchInsert(int*, int, int);

/****Functions Declarations****/
int searchInsert(int* nums, int numsSize, int target) 
{
	int searchIndex;

	//case - 1: when given target is already present
	for(searchIndex = 0; searchIndex < numsSize; searchIndex++)
	{
		if(nums[searchIndex] == target)
		{
			return searchIndex;
		}
	}

	//case - 2: when given target is not present in the sorted(ascending) array.
	for(searchIndex = 0; searchIndex < numsSize; searchIndex++)
	{
		if(nums[searchIndex] > target)
		{
			return searchIndex;
		}
	}

	//case - 3: if the target is greater than all.
	return numsSize;

} //eo searchInsert::

void main()
{
	int nums[] = {1, 3, 5, 6, 8, 10, 15, 28, 75, 76, 100};
	int target = 20;
	int numsSize = sizeof(nums)/sizeof(int);

	printf("The index is or would be: %d\n", searchInsert(nums, numsSize, target));
} //eo main::
