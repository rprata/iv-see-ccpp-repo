#include <stdio.h>
//imprimir os 20 primeiros termos da serie de fibonacci

#define MAX 20

int main (void)
{

	int first, second, next, counter;
	first = second = 1;
	printf("1) %d\n", first);
	printf("2) %d\n", second);
	counter = 3;

	while (counter <= MAX)
	{
		printf("%d) %d\n", counter, (next = first + second));
		first = second;
		second = next;
		counter++;
	}

	return 0;
}
