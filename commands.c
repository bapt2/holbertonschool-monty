#include "monty.h"

/**
 * _isdigit - Entry point
 * Description: checks for a digit
 * @c: c is the character
 * Return: Alaways 0 (Success)
 */

int _isdigit(char *c)
{
	char *temp = c;

	if (c == NULL)
		return (0);
	if (*temp == '-')
		temp++;

	for (; *temp != '\0'; temp++)
	{
		if ((*temp < '0' || *temp > '9'))
		{
			return (0);
		}
	}
	return (1);
}

/**
 * new_Node - creates a new node
 * @n: data of the new node
 * Return: pointer to new node
 */

stack_t *new_Node(int n)
{
	stack_t *new = NULL;

	new = malloc(sizeof(stack_t));
	if (new == NULL)
	{
		dprintf(STDERR_FILENO, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}
	new->n = n;
	new->next = NULL;
	new->prev = NULL;
	return (new);
}

