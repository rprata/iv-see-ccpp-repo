#include <stdio.h>


int fatorial (int i)
{
	if (i > 0)
		return i*fatorial(i - 1);
	return 1;
}


int main (void)
{
	int valor;
	scanf("%d", &valor);
	printf ("%d\n", fatorial(valor));
	return 0;
}