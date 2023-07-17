#include<stdio.h>
#include<string.h>
#pragma warning (disable:4996)

#define LEN 50

int main()
{

    char arr[LEN] = { 0 };
    char reversed[LEN] = { 0 };

    printf("Enter one word or setence : ");
    scanf("%[^\n]s", arr);

    printf("You have entered : %s", arr);
    int len = strlen(arr);
    int index1;
    int index2;
    for (index1 = len, index2 = 0; index2 < len; index1--, index2++)
    {
        reversed[index2] = arr[index1 - 1];
    }
    printf("\nReversed sentence is : %s", reversed);

    printf("\n");

    return 0;
}
