#include "main.h"

/**
 * factorial - returns the factorial for a given number
 *
 * @n: integer
 *
 * Return: (0) or (1)
 */

int factorial(int n)
{
	int x;

	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		x = n * factorial(n - 1);
	}
	return (x);
}
