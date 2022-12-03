// Structures in C

#include<stdio.h>

struct student
{
    int roll;
    float id;
    int rank;
    // char name[20];
}s1, s2;

int main()
{
   s1.roll = 70;
   s1.id = 1890;
   s2.roll = 65;
   s2.id = 1900;
   s2.rank = 3;
   struct student *ptr = &s2;
   
//   s1.name = "Dhruv";
   printf("Roll number is : %d \nID is : %f", s1.roll, s1.id);
   printf("\nRoll number is : %d \nID is : %f \nRank is : %d", ptr->roll, ptr->id, (*ptr).rank);
   return 0;
}

// Output of above program....
// Roll number is : 70 
// ID is : 1890.000000
// Roll number is : 65 
// ID is : 1900.000000 
// Rank is : 3
