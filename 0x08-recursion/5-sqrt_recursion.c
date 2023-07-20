#include "main.h"

/**
 * SQRT - runs a check on the input numberfrom n to base
 * @check: is the same integer as n
 * @num: runs from 1 to n
 *
 * Return: sqrt
 */

int SQRT(int check, int num)
{
	if (num * num == check)
		return (num);
	else if (num * num > check)
		return (-1);
	else
		return (SQRT(check, num + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: integer number being used
 *
 * Return: -1 if unsuccessful, or n
 */

int _sqrt_recursion(int n)
{
	return (SQRT(n, 1));
}
