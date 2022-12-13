#include "monty.h"

int main(int argc, char *argv[])
{
	FILE *file = NULL;
	ssize_t fd = 0, r = 0;
	stack_t *stack = NULL;
	unsigned int line_number = 0;

	if (file = fopen(argv[1], "r") == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s\n", file);
		exit(EXIT_FAILURE);
	}
	if (getline(&stack, &line_number, stdin) == -1)
		exit(EXIT_FAILURE);
	return (0);
}
