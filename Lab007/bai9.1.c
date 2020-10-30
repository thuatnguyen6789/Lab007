#include <stdio.h>
int main ()
{
	int num;
	num = 0;
	for (num = 100; num > 0; num--)
	{
		if (num % 5 == 0)
		printf("%d\n", num);
	}
}
