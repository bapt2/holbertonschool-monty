#include "main.c"

void _push(stack_t **stack, unsigned int line_number)
{
	int i;
	char *token;

	token = strtok(NULL, " \t\r\n\a");
	if (!token || _isdigit(i) == 0)
	{
		fprintf(stderr, "L%u: usage: push integer\n", line_number);
		exit(EXIT_FAILURE);
	}
	n = atoi(token);
	if (
}
