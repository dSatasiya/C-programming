#include<stdio.h>

int main()
{
	int a = 10;
	char name[10] = { 'D', 'h', 'r', 'u', 'v', '\0' };

	printf("%d\n", name);  // what about this ?
	printf("%s\n", name);  // prints the stirng "Dhruv".
	printf("%d\n", name[0]);  // prints the ASCII value of 'D', that is 68
	printf("%d\n", name[1]); // print the ASCII value of 'h', that is 104
	printf("Address of name = %p\n", &name); // prints the address of the entire string 
											 //name in the memory.
	printf("Address of D = %p\n", &name[0]); // prints the address of 'D'
	printf("Address of h = %p\n", &name[1]); // prints the address of 'h'
	printf("Address of r = %p\n", &name[2]); // prints the address of 'r'
	printf("Address of u = %p\n", &name[3]); // prints the address of 'u'
	printf("Address of v = %p\n", &name[4]); // prints the address of 'v'
	printf("%d\n", sizeof(a));
	printf("%d\n", sizeof(name));
	printf("Size of D = %d\n", sizeof(name[0]));
	printf("Size of h = %d\n", sizeof(name[1]));
	printf("Size of r = %d\n", sizeof(name[2]));
	printf("Size of u = %d\n", sizeof(name[3]));
	printf("Size of v = %d\n", sizeof(name[4]));


	return 0;
}
