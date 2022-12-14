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
