#include <stdio.h>

#define ELEM 5

int main (void)
{
	int i, j, temp;
	int vector[ELEM];

	for (i = 0; i < ELEM; i++)
	{
		scanf("%d", &vector[i]);
	}

	//ordenar
	for (i = ELEM; i >= 2; i--)
	{
		for (j = 0; j < i - 1; j++)
		{
			if (vector[j] > vector[j+1])
			{
				temp = vector[j];
				vector[j] =  vector[j + 1];
				vector[j + 1] = temp;
			}
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