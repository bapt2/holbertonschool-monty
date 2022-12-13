#include "monty.h"

int main(int argc, char **argv)
{
	(void) argc;
	(void) argv;

	int i = 0;
	char *token;
	stack_t **stack = 0;
	unsigned int line_number = 0;

	token = strtok(NULL, " \t\r\n\a");
	if (!token || _isdigit(i) == 0)
	{
		fprintf(stderr, "L%u: usage: push integer\n", line_number);
		exit(EXIT_FAILURE);
	}
	i = atoi(token);

	if (add_dnodeint_end(stack, i) == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}
	
	return (0);
}
