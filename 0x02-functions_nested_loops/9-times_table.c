#include "main.h"

/**
 * times_table - prints the times table
 */

void times_table(void)
{
	int x, m, a;

	for (x = 0; x <= 9; x++)
	{
		_putchar('0');
		for (m = 1; m <= 9; m++)
		{
			_putchar(',');
			_putchar(' ');
			a = x * m;

			if (a < 10)
				_putchar(' ');
			else
				_putchar((a / 10) +'0');
			_putchar((a % 10) + '0');
		}
		_putchar('\n');
	}
}
