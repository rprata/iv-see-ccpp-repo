#include <stdio.h>


int main (void)
{
	float fahr, celsius;
	float lower, upper, step;

	lower = 0; /* Limite inferior de nossa tabela*/
	upper = 300.00; /* Limite superior de nossa tabela*/
	step = 20.00; /* passo que vai nossa tabela */

	fahr = lower;
	while (fahr <= upper)
	{
		celsius = 5.00 * (fahr - 32.00) / 9.00;
		printf("%6.2f\t%6.2f\n",fahr, celsius);
		fahr += step; //fahr = fahr + step;
	}


	return 1;
}