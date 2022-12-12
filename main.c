#include "monty.h"


int main (int argc, char **argv)
{
	(void)argc;
	(void)argv;

	int i = 0;

	if (_isdigit(i) == 0)
	{
		fprintf("L8: push %d: push integer\n", i);
		exit(EXIT_FAILURE);
	}
	return (i);
}
