#include <stdio.h>
#include <stdlib.h>

int main (int argc, char ** argv)
{
	char * name;
	name = argv[1];

	if (argc > 1)
		printf("Hello World, %s!!!\n", name);
	else
		printf("Hello World!!!\n");

	return 0;
}