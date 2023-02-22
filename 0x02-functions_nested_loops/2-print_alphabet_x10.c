#include "main.h"
/**
 * print_alphabet_x10 - print the alpha x10 times
 */

void print_alphabet_x10(void)
{
	char i, t;

	for (t = 1; t <= 10; t++)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}
