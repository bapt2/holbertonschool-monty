#include "monty.h"

/**
 * _isdigit - Entry point
 * Description: checks for a digit
 * @c: c is the character
 * Return: Alaways 0 (Success)
 */

int _isdigit(int c)

{
        if (c >= '0' && c <= '9')
                return (1);

        else
                return (0);
}
