#include "monty.h"


int main (int argc, char **argv)
{
	(void)argc;
	(void)argv;

	int i = 0;
	int x = 0;

	x = atoi(argv[2]);

	if (_isdigit(i) == 0)
	{
		fprintf(stderr, "L%x: usage: push integer\n", x);
		exit(EXIT_FAILURE);
	}
	return (i);
}
