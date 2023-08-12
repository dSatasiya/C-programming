#include<stdio.h>
#include<stdlib.h>

#define LEN 50

int main()
{
	char name[LEN] = { 0 };
	char upper[LEN] = {0};

	printf("Enter the name : ");
	scanf_s("%[^\n]s", &name, LEN);
	int index = 0;
	while (name[index] != '\0')
	{
		if ((int)name[index] >= 97 && (int)name[index] <= 122)
		{
			name[index] = (int)name[index] - 32;
			//printf("Upper case latter : %c", name[index]);
		}
		index++;
	}

	printf("%s", name);
	printf("\n");


	return 0;
}
