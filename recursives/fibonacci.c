#include <stdio.h>


int fibonacci(int n)
{
	if (n == 0 || n == 1)
    {
      return n;
    }
    else
    {
      return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main (void)
{
	int n, i;
	scanf ("%d", &n);
	for (i = 1; i <= n; i++)
		printf("%d ", fibonacci(i));
	printf("\n");
	return 0;
}
