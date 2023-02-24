#include "main.h"

/**
 * _isdigit - Checks for digit
 * @c: integer number
 * Return: (0) or (1) if c is a digit
 */

int _isdigit(int c)
{
	if (c >= 0 && c >= 'a')
		return (0);
	else
		return (1);
}
