#include<stdio.h>
#include<string.h>

int main()
{
    char firstChar;
    int secondChar;
    char arr[10];
    printf("Enter the character : ");
    scanf("%c", &firstChar);
    printf("You have entered \'%c\'", firstChar);
    //printf("\nEnter the second characeter : ");
    //secondChar = getchar();

    printf("\nEnter the sentence : ");
    scanf("%s", arr);  // When we hit the enter here, it will automatically
                       // take the null character as a last character into 
                       // the memory stake. 
    printf("Your entered sentence is : %s", arr);

    return 0;
}
