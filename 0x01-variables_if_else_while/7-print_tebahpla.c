#include <stdio.h>

/**
 * main- prints the aplhabet in reverse
 *
 * Return: Success (0)
 */

int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; c--)
		putchar(c);
	putchar('\n');

	return (0);
}
