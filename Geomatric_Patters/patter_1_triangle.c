/*
Question-Example
....Task is to print the below pattern using C code....
    *           //space = 4, stars = 1 
   ***          //space = 3, stars = 3 
  *****         //space = 2, stars = 5 
 *******        //space = 1, stars = 7 
*********       //space = 0, stars = 9

no. total lines = 0 to 4 (5) 

// Libraries =============================================*/
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
#include<limits.h>
#include<float.h>
#include<string.h>

/*=======MAIN: FUNCTION==================================
========================================================*/
int main()
{
    int no_of_lines = 0;
    
    printf("Enter how many lines of pattern you want?\n");
    scanf("%d", &no_of_lines);

    int no_of_space = (no_of_lines - 1);
    int no_of_stars = 1;
    int star_count = no_of_stars;

    while(no_of_lines > 0)
    {
        while(no_of_space > 0)
        {
            printf(" ");
            no_of_space--;
        }
        while(star_count > 0)
        {
            printf("*");
            star_count--;
        }
        printf("\n");
        no_of_lines--;
        no_of_space = (no_of_lines - 1);
        no_of_stars += 2;
        star_count = no_of_stars;
    }

    printf("\n============END OF EXECUTION=============\n");
    return 0;
} // eo main::

/*==============Output====================/
/*Enter how many lines of pattern you want?
10
         *
        ***
       *****
      *******
     *********
    ***********
   *************
  ***************
 *****************
*******************

============END OF EXECUTION=============
*/
