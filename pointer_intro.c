#include<stdio.h>

int main()
{
	int a = 10;
	int* ptrToa;
	ptrToa = &a;
	int b = 20;
	int* ptrTob;
	ptrTob = &b;
	
	//printf("The value of a is : %d\n", a);
	//printf("The value of pointer is : %p\n", ptr);
	//printf("The value of pointer is : %p\n", &a);
	//printf("The address of integer a is : %p\n", ptr);
	//printf("The address of pointer is : %p\n", &ptr);
	//printf("a has value : %d\n", *ptr);
	
	/*int sumByPointer = 0;
	int sumByVariable = 0;
	sumByPointer = *ptrToa + *ptrTob;
	sumByVariable = a + b;
	printf("sum by pointer is = %d\n", sumByPointer);
	printf("sum by variable is = %d\n", sumByVariable);



	return 0;
}
