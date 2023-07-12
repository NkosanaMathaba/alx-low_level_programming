#include "main.h"

/**
 * _puts_recursion - prints a string followed by a new line
 *
 * @s: string being printed
 */

void _puts_recursion(char *s)
{
	int count = 0;
	while (s[count] != '\0')
	{
		printf("%c", s[count]);
		count++;
	}
	printf("\n");
}
