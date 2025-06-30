// Preprocessors =========================================

// Libraries =============================================
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>

// Constants =============================================


// Global Variables ======================================



// Data Structures ======================================


// Function Prototype ===================================


// Functions ============================================
/**********************Solution-1************************/
/*bool isValid(char* s)
{
    int round_open = 0;
    int round_close = 0;
    int square_open = 0;
    int square_close = 0;
    int curly_open = 0;
    int curly_close = 0;
    int order_flag = 0;

    int len = strlen(s);
    
    while(*s)
    {    
        if(len >= 2)
        {
            if(len >= 3)
            {
                if((*s == '(' && *(s+2) == ')') || 
                (*s == '[' && *(s+2) == ']') || 
                (*s == '{' && *(s+2) == '}'))
                {   
                    return false;
                }
            }

            if((*s == ')' && *(s+1) == '(') || (*s == ']' && *(s+1) == '[') ||
               (*s == '}' && *(s+1) == '{'))
            {
                return false;
            }
        }
   
        switch(*s)
        {
        case '(': round_open++;
            break;
        case ')': round_close++;
            break;
        case '[': square_open++;
            break;
        case ']': square_close++;
            break;
        case '{': curly_open++;
            break;
        case '}': curly_close++;
            break;
        default:
            break;
        }

        s++;
    }

    if((round_open != round_close) || (square_open != square_close) || (curly_open != curly_close))
    {
        return false;
    }
    else
    {
        return true;
    }

} //eo isValid::
*/

/**********************Solution-2************************/
bool isValid(char* s)
{
    int round_open = 0, round_close = 0;
    int square_open = 0, square_close = 0;
    int curly_open = 0, curly_close = 0;

    int len = strlen(s);
    for (int i = 0; i < len; i++)
    {
        if (i + 2 < len)
        {
            if ((s[i] == '(' && s[i+2] == ')') || 
                (s[i] == '[' && s[i+2] == ']') || 
                (s[i] == '{' && s[i+2] == '}'))
            {
                return false;
            }
        }

        if (i + 1 < len)
        {
            if ((s[i] == ')' && s[i+1] == '(') || 
                (s[i] == ']' && s[i+1] == '[') || 
                (s[i] == '}' && s[i+1] == '{'))
            {
                return false;
            }
        }

        switch(s[i])
        {
            case '(': round_open++; break;
            case ')': round_close++; break;
            case '[': square_open++; break;
            case ']': square_close++; break;
            case '{': curly_open++; break;
            case '}': curly_close++; break;
            default: break;
        }
    }

    if ((round_open != round_close) ||
        (square_open != square_close) ||
        (curly_open != curly_close))
    {
        return false;
    }

    return true;
}

/*=======MAIN: FUNCTION==================================
========================================================*/
int main()
{
    char* s = "()[]{}";               //as per my logic this is true but as per the conditions, it is false.

    isValid(s);

    printf("%s\n", isValid(s) ? "true" : "false");

    return 0;    
} // eo main::


/* Extra Code
(*s == ')' && *(s+1) == '(') || (*s == ']' && *(s+1) == '[') ||
           (*s == '}' && *(s+1) == '{')
(*s == '(' && *(s+1) == '[') || (*s == '(' && *(s+1) == '{') ||
           (*s == '[' && *(s+1) == '(') || (*s == '[' && *(s+1) == '{') ||
           (*s == '{' && *(s+1) == '(') || (*s == '{' && *(s+1) == '[') ||

*/
