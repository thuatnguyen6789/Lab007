#include <stdio.h>
int main ()
{
	int i, j, k;
	i = 7;
	printf("Enter the row: ");
	
	printf("\n");
	for (j = 0; j < i; j++)
	{
		printf("\n");
		for (k = 7; k > j; k--)
		printf("*");
	}
}
