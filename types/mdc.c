#include <stdio.h>


int mdc(int a, int b)
{
	int divisor, dividendo, c;

	if (b > a)
	{
		dividendo = b;
		divisor = a;
	}
	else
	{
		dividendo = a;
		divisor = b;		

	}

	while ((dividendo % divisor) != 0)
	{
		c = dividendo % divisor;
		divisor = c;
	}

	return divisor;

}

int main (void)
{
	int a, b;
	scanf ("%d %d", &a, &b);
	printf("%d\n", mdc(a, b));

	return 0;
}