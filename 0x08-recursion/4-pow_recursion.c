#include "main.h"

/**
 * _pow_recursion - prints the power of an number
 * @x: integer number
 * @y: power of integer x
 *
 * Return: the value of x raised to thepower of y.
 * returns -1 if y less than 0
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y != 0)
		return (x * _pow_recursion(x, (y - 1)));
	else
		return (1);
}
