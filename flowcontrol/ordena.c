#include <stdio.h>

#define ELEM 5

int main (void)
{
	int i, j, m, temp;
	int vector[ELEM];

	for (i = 0; i < ELEM; i++)
	{
		scanf("%d", &vector[i]);
	}

	//ordenar
	for (i = 0; i < ELEM - 1; i++)
	{
		m = i;
		for (j = i + 1; j < ELEM; j++)
		{
			if (vector[j] < vector[m])
			{
				m = j;
			}
			temp = vector[m];
			vector[m] =  vector[i];
			vector[i] = temp;
		}
	}

	//imprimir
	for (i = 0; i < ELEM; i++)
	{
		printf("%d ", vector[i]);
	}
	printf("\n");

	return 0;
}