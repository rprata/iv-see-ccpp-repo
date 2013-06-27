#include <stdio.h>

int main (void)
{
	int fat, i;
	long result = 1;

	scanf ("%d", &fat);

	for (i = 2; i <= fat; i++)
	{
		result *= i;
	}

	printf("%ld\n", result);

}