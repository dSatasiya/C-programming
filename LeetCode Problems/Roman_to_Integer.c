// Libraries =============================================
#include<stdio.h>

// Function Prototype ===================================
int romanToInt(char*);

// Functions ============================================
//s contains only the characters ('I', 'V', 'X', 'L', 'C', 'D', 'M').
/*
Symbol       Value
I             1
V             5
X             10
L             50
C             100
D             500
M             1000
*/

int romanToInt(char* s) 
{
    int finalInteger = 0;
    while(*s)
    {
        //Handle for subtractive case

        if(*s == 'I' && (*(s+1) == 'V' || *(s+1) == 'X'))
        {
            finalInteger = finalInteger + ((*(s+1) == 'V') ? 4 : 9); 
            s += 2;
            continue;
        }

        if(*s == 'X' && (*(s+1) == 'L' || *(s+1) == 'C'))
        {
            finalInteger = finalInteger + ((*(s+1) == 'L') ? 40 : 90); 
            s += 2;
            continue;
        }

        if(*s == 'C' && (*(s+1) == 'D' || *(s+1) == 'M'))
        {
            finalInteger = finalInteger + ((*(s+1) == 'D') ? 400 : 900); 
            s += 2;
            continue;
        }

    
        //regular additive cases
        switch(*s)
        {
        case 'I': finalInteger += 1;
            break;
        case 'V': finalInteger += 5;
            break;
        case 'X': finalInteger += 10;
            break;
        case 'L': finalInteger += 50;
            break;
        case 'C': finalInteger += 100;
            break;
        case 'D': finalInteger += 500;
            break;
        case 'M': finalInteger += 1000;
            break;
        default:
            break;
        }

        s++;         //Incrementing the roman digits given array
    }
    
    return finalInteger;

} // eo romanToInt::

/*=======MAIN: FUNCTION==================================
========================================================*/
int main()
{
    char* s = "MCMXCIV";

    printf("Integer value : %d\n", romanToInt(s));

    return 0;    
} // eo main::
