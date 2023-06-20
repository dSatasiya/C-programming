#include<stdio.h>
#include<string.h>


int calculateSum(int*, int*);    // this could be called function defination.
int calculateMul(int*, int*);

int calculateSum(int* ptrToa, int* *ptrTob)  // Formal Parameters, Keep in mind here we are not getting 
											// the value of the variable, we are simply getting the adderess
											// address and to hold the address we are writing * sign. 
{
	int sum = 0;
	sum = *ptrToa + *ptrTob;
	return sum;
}

int calculateMul(int* ptrToa, int* ptrTob)
{
	int mul = 0;
	mul = (*ptrToa) * (*ptrTob);
	return mul;
}



int main()
{
	while (1)
	{
		int a;
		int b;
		printf("Enter the value of first number or enter 1 to exit: ");
		scanf_s("%d", &a);
		if (a == 1)
		{
			break;
		}
		//int c;
		//if((c = getchar))
		printf("\nEnter the value of the second number: ");
		scanf_s("%d", &b);
		int* ptrToa = &a;
		int* ptrTob = &b;
		int mySum = 0;
		int myMul = 0;

		mySum = calculateSum(ptrToa, ptrTob);    // Actual Parameters
		// While using pass by refernce we are passing the address
		// of the variable not the valueof the variable. So in order 
		// to hold the address we need a pointer in formal parameters
		// where we have defined the function. 
		printf("\nThe sumation is : %d\n", mySum);

		myMul = calculateMul(ptrToa, ptrTob);
		printf("\nThe multiplication is : %d\n", myMul);

		printf("\n");
	}
	
	return 0;
}
