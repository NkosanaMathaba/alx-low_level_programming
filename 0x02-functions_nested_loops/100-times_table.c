#include "main.h"
/**
 * print_times_table - prints the n times table starting with 0
 *
 * @n: checks result
 */

void print_times_table(int n)
{
	int x, y, a;

	if (n >= 0 && n <= 15)
	{
		for (x = 0; x <= n; x++)
		{
			_putchar('0');

			for (y = 1; y <= n; y++)
			{
				_putchar(',');
				_putchar(' ');

				a = x * y;

				if (a <= 99)
					_putchar(' ');
				if (a <= 9)
					_putchar(' ');

				if (a >= 100)
				{
					_putchar((a / 100) + '0');
					_putchar(((a / 10) % 10) + '0');
				}
				else if (a <= 99 && a >= 10)
				{
					_putchar((a / 10) + '0');
				}
				_putchar((a  % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
