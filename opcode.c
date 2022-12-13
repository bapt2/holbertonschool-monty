#include "monty.h"

/**
 * _push - push an element to the stack
 * @line_number: the line where the error is
 * @stack: the stack
 * Return: void
*/
void push(unsigned int line_number, stack_t **stack)

{
	int i = 0;
	char *token;

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

}

/**
 * _pall - print all the value of the stack, starting from the top
 * @ln: line number
 * @stack: the stack
 * Return: void
*/
void _pall(unsigned int ln, stack_t **stack)
{
	stack_t *pos = NULL;
	(void)ln;

	pos = *stack;
	while (pos != NULL)
	{
		dprintf(stdout, "%d\n", pos->n);
		pos = pos->next;
	}
}

/**
 * _pint - print the value at the top of the stack
 * @line_number: the line where the error is
 * @stack: the stack
 * Return: void
*/
void _pint(unsigned int line_number, stack_t **stack)
{
	stack_t *pos = NULL;

	pos = *stack;
	if (pos != 0)
		dprintf(stdout, "%d\n", pos->n);
	else
	{
		fprintf(stderr, "L%u: con't pint, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}
}

/**
 * _pop - remove the top element of the stack
 * @line_number: the line where the error is
 * @stack: the stack
 * Return: void
*/
void _pop(unsigned int line_number, stack_t **stack)
{


}

/**
 * _nop - do nothing
 * Return: void
*/

void _nop(unsigned int line_number, stack_t **stack)
{
	(void)line_number;
	(void)stack;
}
