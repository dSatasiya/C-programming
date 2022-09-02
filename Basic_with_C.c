// This code will print text on to the console window

#include<stdio.h>
int main()
{
    int var = 3;
    int var1 = 4;
    var1 = 5;                // Keep this in mind that this is allowed. 
    int var2, var3, var4;
    var2 = var3 = var4 = 6;
    printf("Hello World\n");
    printf("%d\n", var);
    printf("%d\n", var1);
    printf("%d\n", var2);
    printf("%d\n", var3);
    printf("%d\n", var4);
    return 0;
}
