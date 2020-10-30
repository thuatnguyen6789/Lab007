#include <stdio.h>
int main ()
{
	int num1, num2;
	printf("Enter num1: ");
	scanf("%d", &num1);
	printf("Enter num2: ");
	scanf("%d", &num2);
	int i;
	int sum = 0;
	if (num1 <= num2)
	{
	for (i = num1; i <= num2; i++)
	if (i % 2 == 1)
	{
		sum = sum + i;
	}
	printf("sum = %d", sum);
	}
	else
	for (i = num1; i >= num2; i--)
	if (i % 2 == 1)
	{
		sum = sum + i;
	}
	printf("sum = %d", sum);
}
