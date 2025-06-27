// Preprocessors =========================================

// Libraries =============================================
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>
#include<ctype.h>

// Function Prototype ===================================
bool isPalindrome(char*); 

// Functions ============================================

bool isPalindrome(char* s) 
{
    // char* p = s;
    // int slen = strlen(p);        
    char updated_S[50];
    int index = 0;
    char tempChar;

    while(*s != '\0')
    {
        if((*s >= 65 && *s <= 90))
        {
            tempChar = *s;
            tempChar = tempChar + 32;
            updated_S[index] = tempChar;
            s++;
            index++;
            continue;
        }
        if(!isalnum(*s))
        {
            s++;
            continue;
        }
        updated_S[index] = *s;
        s++;
        index++;
    }

    char reversed_S[100];
    int arr_index = 0;
    int temp_index = index;

    while(index)
    {
        reversed_S[arr_index] = updated_S[index-1];
        index--;
        arr_index++;
    }

    if(strncmp(updated_S , reversed_S, arr_index))
    {
        return false;
    }
    else
    {
        return true;
    }

} //eo isPalindrome::

/*=======MAIN: FUNCTION==================================
========================================================*/
int main()
{
    char* s = "A man, a plan, a canal: Panama";

    printf("Is Palindrome : %s", (isPalindrome(s) ? "true" : "false"));

    return 0;
    
} // eo main::
