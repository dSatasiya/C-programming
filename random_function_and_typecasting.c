// Use of rand() function in C to generate the random numbers....

#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>

#define MAXSAMPLES 5
#define DEFAULT_VALUE -99.9

int main()
{
	int i = 0;

	float arr[MAXSAMPLES];

	while (i<MAXSAMPLES)
	{
		//arr[i] = rand();			// It generates the random values between 0 and 32,767.
		//arr[i] = (int)rand()/100;
		arr[i] = DEFAULT_VALUE;
		i++;
	}

	i = 0;
	while (i < MAXSAMPLES)
	{
		//arr[i] = (int)rand()/100;
		arr[i] = rand() / (float)RAND_MAX * 90.0 + 15.0;
		i++;
	}
	int maxVal = RAND_MAX;
	printf("The maximum value for the function is = %d\n", maxVal);

	// ................Type casting of the variable in the C..............
	/*float a = 25.3478;
	int b = 23;
	
	// Float to integer explicit conversion.
	// Also known as lower(Float) to higher(Integer) data type conversion.
	int c = (int)a;
	printf("Typecasted value of a is = %d\n", c);
	
	// Integer to float explicit conversion.
	// Also known as higher(Integer) to lower(Float) data type conversion.
	float d = (float)b;
	printf("Typecasted value of b is = %f\n", d);*/

	return 0;
}
