#include <stdio.h>


int main (void)
{
	int fahr, celsius;
	int lower, upper, step;

	lower = 0; /* Limite inferior de nossa tabela*/
	upper = 300; /* Limite superior de nossa tabela*/
	step = 20; /* passo que vai nossa tabela */

	fahr = lower;
	while (fahr <= upper)
	{
		celsius = 5 * (fahr - 32) / 9;
		printf("%d\t%d\n",fahr, celsius);
		fahr = fahr + step;
	}

	return 0;
}