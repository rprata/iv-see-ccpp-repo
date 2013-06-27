#include <stdio.h>

int main (void)
{
	int i;
	int resposta;
	printf("Quanto é 10+20x10+20?\n");
	printf("1)9000 \n");
	printf("2)200 \n");
	printf("3)230 \n");
	printf("4) NRA\n");

	scanf("%d", &i);
	switch (i)
	{
		case 1: 
			resposta = 0;
			break;
		case 2:
			 resposta = 0;
			break;
		case 3:
			resposta = 1;
			break;
		case 4: 
			resposta = 0;
			break;
		default :
			 printf("resposta errada, tente novamente\n");
			 return 1;
	}

	if (resposta)
	{
		printf("Resposta Correta!!!\n");
	}
	else
	{
		printf("Incorreta. A resposta é a 3)\n");
	}

}