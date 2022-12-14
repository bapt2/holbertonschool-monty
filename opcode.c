#include "monty.h"

int value;
/**
 * _push - creates a new node at the beginning of the stack
 * @line_number: the line where the error is
 * @stack: the stack
 * Return: void
*/
void _push(stack_t **stack, unsigned int line_number)
{
	(void)line_number;
	stack_t *pos;

	pos = new_Node(value);

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
void _pall(stack_t **stack, unsigned int ln)
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
void _pint(stack_t **stack, unsigned int line_number)
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
void _pop(stack_t **stack, unsigned int line_number)
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
void _nop(stack_t **stack, unsigned int line_number)
{
	(void)line_number;
	(void)stack;
}
