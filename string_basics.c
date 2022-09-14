
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
    
    
    // To print the single character from the string...
    char name[10] = "Dhruv";
    int i;
    for(i=0; i<5; i++)
    {
        printf("%c\n", name[i]); // Remember we have to write %c as a placeholder not %s
    }
    
    
    return 0;
}
