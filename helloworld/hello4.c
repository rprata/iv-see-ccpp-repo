#include <stdio.h>

int main (int argc, char * argv)
{
	char name[100];
	name = argv[1];

	if (argc > 0)
		printf("Hello World, %s!!!\n", name);
	else
		printf("Hello World!!!\n");

	return 0;
}