#include "main.h"

/**
 * _puts  - writes out a string
 *
 * @str: string character
 */

void _puts(char *str)
{
	int x = 0;

	while (str[x] != '\0')
	{
		_putchar(str[x]);
		x++;
	}
	_putchar('\n');
}
