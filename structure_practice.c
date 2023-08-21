#include<stdio.h>

#define LEN 50

struct student
{
    int rollNumber;
    //char name[LEN];
    float averageMarks;
}studentOneDetail, studentTwoDetails;


int main()
{
    studentOneDetail.rollNumber = 56;
    //studentOneDetail.name[]= "Dhruv";
    studentOneDetail.averageMarks = 0.0f;
    studentTwoDetails.averageMarks = 0.0f;

    printf("Roll number of first student is : %d", studentOneDetail.rollNumber);
   // printf("Name of the student is %s", studentOneDetail.name);

    printf("\nEnter your average marks : ");
    scanf("%f %f", &studentOneDetail.averageMarks, &studentTwoDetails.averageMarks);

    printf("The average of first student is : %f", studentOneDetail.averageMarks);
    printf("\nThe average of second student is : %f", studentTwoDetails.averageMarks);
    
    return 0;
}
