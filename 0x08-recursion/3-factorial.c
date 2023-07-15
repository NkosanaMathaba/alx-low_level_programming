#include "main.h"

/**
 * factorial - prints the factorial of a number
 * @n: integer number
 *
 * Return: -1 if lower than 0, 1 if n is 0.
 */

int factorial(int n)
{
	if (n > 0)
	{
		n *= factorial(n - 1);
	}
	else if (n < 0)
		return (-1);
	else
		return (1);

	return (n);
}

