
#include<stdio.h>
#include<conio.h>

int main()
{
    char name[] = "Dhruv Satasiya";
    // char name1[6] = "Hello";
    // char name2[] = {'K', 'r', 'i', 's', 'h', 'n', 'a', '\0'};
    printf("%s\n", name);
    printf("%40.15s\n", name);   // To move the string right side....
    // printf("%s\n", name1);
    // printf("%s\n", name2);
    
    // char name3[25];
    // scanf("%s", name3);   // Remember space will not be                          included in scanf...
    // printf("%s", name3);
    // gets(name3);
    // puts(name3);
    // printf("\nYes we have received one string from the user...\n");
    return 0;
}
