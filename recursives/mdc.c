#include <stdio.h>


int mdc(int a, int b)
{
	int temp;
	
	if (b > a) //swap
	{
		temp = b; b = a; a = temp;
	}

	if (b == 0)
		return a;
	else
		return mdc(b, a % b);
}

int main (void)
{
	int a, b;
	scanf ("%d %d", &a, &b);
	printf("%d\n", mdc(a, b));

	return 0;
}