// WAP to convert specific days into years and weeks...

#include <stdio.h>

int main() 
{
    float days, years, weeks;
    // float years, weeks;
    printf("Enter the number of days... : ");
    scanf("%f", &days);
    years = days/365;
    weeks = days/7;
    printf("Total years are : %f\n", years);
    printf("Total weeks are : %f\n", weeks);
    
    return 0;
}
