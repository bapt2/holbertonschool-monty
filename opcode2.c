#include "monty.h"

/**
 * _add - adds the two top elements of the stack
 * @line_number: the line where the error is
 * @stack: the stack
 * Return: void
*/
void _add(unsigned int line_number, stack_t **stack)
{
	stack_t *pos = NULL;
	int sum = 0;

	pos = *stack;
	if (pos->next == NULL && pos->prev->prev == NULL)
	{
		fprintf(stderr, "L%u: can't add, stack too short", line_number);
		exit(EXIT_FAILURE);
	}
	else
	{
		pos->next = pos;
		if (pos->next == NULL && pos->prev == pos)
		{
			sum += pos->n;
			pos->prev->n = sum;
			pos->next->prev = NULL;
			pos->next = NULL;
			free(pos);
		}
	}
}

/**
 * _swap - swaps the two top elements of the stack
 * @line_number: the line where the error is
 * @stack: the stack
 * Return: void
*/
void _swap(unsigned int line_number, stack_t **stack)
{
	stack_t *pos = NULL;
	int y = 0;

	pos = *stack;
	if (pos->next == NULL && pos->prev->prev == NULL)
	{
		fprintf(stderr, "L%u: can't swap, stack too short", line_number);
		exit(EXIT_FAILURE);
	}
	else 
	{
		pos->next = pos;
		if (pos->next == NULL && pos->prev == pos)
		{
			pos->next->n = y;
			pos->next->n = pos->prev->n;
			pos->prev->n = y;
		}
	}
}
