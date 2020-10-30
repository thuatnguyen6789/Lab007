#include <stdio.h>
int main ()
{
	char name[50];
	int age, i;
	
	printf("Please your name: ");
	gets(name);
	printf("Enter your age: ");
	scanf("%d", &age);
	for (i = 0; i < age; i++)
	printf("I love You %s time %d\n", name, i+1);
}
