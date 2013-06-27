#include <stdio.h>


int main (void)
{
	int first, second;
	int aux;
	int counter = 3;

	first = 1;
	second = 1;
	printf("%d %d ", first, second);

	while (counter <= 10)
	{
		aux = first + second;
		first = second;
		second = aux;
		printf("%d ", aux);
		counter++; //counter = counter + 1;
	}
	printf("\n");
	return 0;
}