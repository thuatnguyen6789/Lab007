#include <stdio.h>
int main ()
{
	int x, y;
	printf("\n");
	for (x = 1; x < 10; x++)
	{
	printf("\n");
	for (y = 1; y <= x; y++)
	printf("%d", y);
	}
}
