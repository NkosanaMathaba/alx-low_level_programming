#include "main.h"

/**
 * print_sign - prints the sign of a number
 * @n: number that is being checked
 * Return: (0) success
 * (1) greater than zero
 * (-1) less than zero
 */

int print_sign(int n)
{
	if (n < 0)
	{
		_putchar('+');
	return (-1);
	}
	else if (n == 0)
	{
		_putchar(0);
	return (0);
	}
	else
	{
		_putchar('-');
	return (1);
	}
}
