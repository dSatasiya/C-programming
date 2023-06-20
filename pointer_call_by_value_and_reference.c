#include<stdio.h>

int callByValue(int a, int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
    return a, b;
}

int callByReference(int* ptrToa, int* ptrTob)
{
    int temp;
    temp = *ptrToa;
    *ptrToa = *ptrTob;
    *ptrTob = temp;
    
    return *ptrToa, *ptrTob;
}

int main()
{
    int a = 10;
    int b = 20;
    int* ptrToa;
    int* ptrTob;

    ptrToa = &a;
    ptrTob = &b;

    // Before the function calling.....
    printf("\nValues of a and b before call by value is: \n");
    printf("a = %d, b = %d", a, b);

    //int myA, myB;
    // After the fuction calling.....
    callByValue(a, b);
    printf("\nValues of a and b after call by value is: \n");
    printf("a = %d, b = %d", a, b);
    printf("\n");

    // Before the funtion calling.....
    printf("\nValues of a and b before call by reference is: \n");
    printf("a = %d, b = %d", a, b);

    // After the fuction calling.....
    callByReference(ptrToa, ptrTob);
    printf("\nValues of a and b after call by reference is: \n");
    printf("a = %d, b = %d", a, b);
    printf("\n");

    return 0;
}

// Expected Output of the above code
/*Values of a and b before call by value is:
a = 10, b = 20
Values of a and b after call by value is:
a = 10, b = 20

Values of a and b before call by reference is:
a = 10, b = 20
Values of a and b after call by reference is:
a = 20, b = 10*/
