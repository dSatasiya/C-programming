// Preprocessors =========================================

// Libraries =============================================
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

// Constants =============================================
#define         LEN         30

/*=======MAIN: FUNCTION==================================
========================================================*/
int main()
{
    // int return_val = 0;
    char str1[LEN] = "Dhruv";
    char str2[LEN] = "Satasiya";
    printf("str1 before memmove: %s", str1);
    memmove(str1, str2, strlen(str2));
    printf("\nstr1 after memmove: %s", str1);

    // printf("Before memset: %s", str1);
    // memset(str1, 0, strlen(str1));
    // printf("\nAfter memset: %s", str1);

    // char str2[LEN] = "Satasiya";

    // char *ptr = strstr(haystack, needle);
    // printf("needle found @ %d", ptr-haystack);

    // printf("Concatenated str: %s", strcat(str1, str2));

    // char str2[LEN]  = "Satasiya";
    // return_val = strncmp(str1, str2, 5);
    
    // printf("Return value: %d", return_val);

    // printf("str1: %s", strcpy(str1, str2));
    // printf("\nstr1 len: %d", strlen(str1));

    // printf("\nLast Name Length : %d", strlen(lastName));

    // printf("\nThe full name is : %s", strcat(firstName, lastName)); 

    printf("\n\n============END OF EXECUTION=============\n");
    return 0;

    
} // eo main::
