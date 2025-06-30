// Given a non-negative integer x, return the square root of x rounded down to the nearest integer. The returned integer should be non-negative as well.

// You must not use any built-in exponent function or operator.

// For example, do not use pow(x, 0.5) in c++ or x ** 0.5 in python.

#include<stdio.h>

int mySqrt(int);					/*prototype of the function*/

/*definition*/
int mySqrt(int x) 
{

	int low, high;
	low = 0;
	high = x;
	long int midPoint = 0;			/*better to keep it as long int as midPoint*midPoint will result into larger number
									and may result into overflow of variable error of run time */

	if(x == 0 || x == 1)
	{	
		return x;
	}

	while(low <= high)
	{
		midPoint = (low + high) / 2;
		if((midPoint*midPoint) == x)
		{
			return midPoint;
		}
		else if ((midPoint*midPoint) < x)
		{
			low = midPoint + 1;
		}
		else
		{
			high = midPoint - 1;
		}
	}
   	
   	return high;					// highest rounded down value which is the closest right squre root of the given number

} //eo mySqrt::

int main()
{
	int num = 8;

	printf("The Square root of %d is : %d\n", num, mySqrt(num));

} //eo main
