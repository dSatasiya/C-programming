#include<stdio.h>

int* func();

int main()
{
    int a = 100;
    int b = 200;

    //int* ptr = func();

    //int* const constantPtr = &a;  // This is constant pointer.

    void* voidPtr;
    voidPtr = &a;

    //constantPtr = &b; 
    //printf("\nThe value stored at the address is : %d\n", *ptr);

    //printf("\n%d\n", constantPtr);

    printf("\nThe value of a is %d\n", *(int*)voidPtr);  


    return 0;

}

int* func()
{
    static int y = 20;
    return &y;
}


/*-----------------DESCRIPTION----------------------------
--> Be mindful of segementation fault, it occurs when the program attempts to 
access the memory which is not allocated or been deallocated.
--> static keyword can help to sustain the life of the variable as it declares the 
variables to the global memory and has the life throught the program. 
--> When pointer does not have any value(address) assigned to, it is known as a
"Dangling Pointer". And best way to avoid it by assigning NULL to it. 
--> At line //constantPtr = &b; <-- This gives you the error of assignment of read-only variable,
as the constantPtr is constant pointer you cannot assign new address to it. 

--> void pointer cannot be dereferenced directly, first it should be typecasted. 


*/
