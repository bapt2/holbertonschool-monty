#include "monty.h"

/**
 * _push - creates a new node at the beginning of the stack
 * @line_number: the line where the error is
 * @stack: the stack
 * Return: void
*/
void _push(unsigned int line_number, stack_t **stack)
{
	(void)line_number;
	stack_t *pos;
	int n = 0;

	pos = malloc(sizeof(stack_t));
	if (pos == NULL)
	{
		dprintf(STDERR_FILENO, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}
	pos->n = n;
	pos->next = NULL;
	pos->prev = NULL;

	pos->next = *stack;
	if (*stack != NULL)
		(*stack)->prev = pos;
	*stack = pos;
}

/**
 * _pall - print all the value of the stack, starting from the top
 * @ln: line number
 * @stack: the stack
 * Return: void
*/
void _pall(unsigned int ln, stack_t **stack)
{
	stack_t *pos;
	(void)ln;

	pos = *stack;
	while (pos != NULL)
	{
		dprintf(STDOUT_FILENO, "%d\n", pos->n);
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
	stack_t *pos;

	pos = *stack;
	if (pos != 0)
		dprintf(STDOUT_FILENO, "%d\n", pos->n);
	else
	{
		dprintf(STDERR_FILENO, "L%u: can't pint, stack empty\n", line_number);
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
	stack_t *pos;

	pos = *stack;
	if (!pos)
	{
		dprintf(STDERR_FILENO, "L%u: can't pop an empty stack \n", line_number);
		exit(EXIT_FAILURE);
	}
	*stack = pos->next;
	if (pos->next != NULL)
		pos->next->prev = NULL;
	free(pos);
}

/**
 * _nop - do nothing
 * @line_number: void
 * @stack: void
 * Return: void
*/
void _nop(unsigned int line_number, stack_t **stack)
{
	(void)line_number;
	(void)stack;
}
