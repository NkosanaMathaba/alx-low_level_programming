#include "main.h"

/**
 * puts2 - print every other character
 *
 * @str: character string
 */

void puts2(char *str)
{
	int s;

	for (s = 0; str[s] != '\0'; s++)
		if (s % 2 == 0)
			_putchar(str[s]);
	_putchar('\n');
}
