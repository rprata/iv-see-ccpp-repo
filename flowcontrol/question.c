#include <stdio.h>

int main (void)
{
	
	char response;
	printf("Gostaria de saber o significado da vida?(s/n)\n");
	scanf("%c", &response);

	if (response == 's')
		printf("também gostaria, rsrsrs.\n");
	else if (response == 'n')
		printf("tudo bem.\n");
	else
		printf("resposta incorreta, tente novamente.\n");

	return 0;
}