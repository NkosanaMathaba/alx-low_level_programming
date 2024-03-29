#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 *
 * @x: integer to be checked
 *
 * Return: -x if integer is negative otherwise x
 */

int _abs(int x)
{
	if (x < 0)
		return (-x);
	else
		return (x);
	return (0);
}
