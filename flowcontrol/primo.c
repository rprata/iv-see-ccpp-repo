#include <stdio.h>
//Testar se numero é primo

int main (void)
{
	int val, i, ePrimo = 1;

	scanf ("%d", &val);

	for (i = val - 1; i > 1; i--)
	{
		if (val % i == 0)
		{
			ePrimo = 0;
		}
	}

	if (ePrimo)
		printf("valor: %d é primo\n", val);
	else
		printf("valor: %d não é primo\n", val);


	return 0;
}