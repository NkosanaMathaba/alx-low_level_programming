#include "main.h"

/**
 * _strlen - returns length of the string
 *
 * @s: character being checked
 *
 * Return: Always (0)
 */

int _strlen(char *s)
{
	int x = 0;

	for (; *s++;)
		x++;
	return (x);
}
