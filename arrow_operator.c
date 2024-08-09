// Preprocessors =========================================

// Libraries =============================================
#include<stdio.h>
#include<stdlib.h>

// Constants =============================================
#define TRUE        1
#define FALSE       0
#define COUNTS      5

// Global Variables ======================================

// Data Structures ======================================
typedef struct
{
    int index;
    float average;
}caluculation_t;

caluculation_t s1;

// Function Prototype ===================================


// Functions ============================================
void initCalculation(caluculation_t* calcObjAdress)
{
    calcObjAdress -> index = FALSE;             // initializaton of structure attributes
    calcObjAdress -> average = FALSE;           // by using arrow operator.
}

/*=======MAIN: FUNCTION==================================
========================================================*/
int main()
{
    int sum = FALSE;            // Local variable to hold the sum
    caluculation_t* s1Ptr;      // calculation_t type pointer to structure
    s1Ptr = &s1;                // address of s1 object stored to pointer.
    
    initCalculation(s1Ptr);

    for(s1.index = 0; s1.index < COUNTS; s1.index++)
    {
        sum += s1.index;
        printf("\nThe index is %d", s1.index);
    }
    printf("\nThe Sumation is : %d", sum);

    s1Ptr -> average = (float)sum / COUNTS;             //used arrow operator to access
                                                       // the variable from the structure

    printf("\nThe average is : %f", s1.average); 

    printf("\n");
    
    return 0;
} // eo main::
