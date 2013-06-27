#include <stdio.h>


int main (void)
{
	int vetor[5];
	int i, max = 0;

	for (i = 0; i < 5; i++)
		scanf("%d", &vetor[i]);

	for (i = 0; i < 5; i++)
	{
		if (vetor[i] > max)
			max = vetor[i];
	}
	printf("O meu maior numero e %d\n", max);


	return 0;
}