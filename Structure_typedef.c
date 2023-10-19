#include<stdio.h>

/*struct student    // first method
{
	int rollNumber;
}s1;*/

struct student      // second method
{
	int rollNumber;
};

typedef struct     // third method // We dont need to write an unique name here after the struct keyword. 
{
	int num;
}my_d;


int main()
{
	//s1.rollNumber = 55;   // from first method

	//struct student s1;    // from second method.
	//struct student s2;

	typedef struct student student_detail;
	student_detail s1;
	s1.rollNumber = 55;
	//s2.rollNumber = 56;
	printf("Student -1's roll number is : %d", s1.rollNumber);
	//printf("\nStudent - 2's roll number is : %d", s2.rollNumber);

	my_d n1;     // from third method
	n1.num = 10;
	printf("\nYour number is %d", n1.num);

	return 0;
}
