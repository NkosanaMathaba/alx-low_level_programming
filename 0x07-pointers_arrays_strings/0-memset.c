#include "main.h"

/**
 * _memset - fills the memory of a constant byte
 *
 * @n: bytes of memory pointed to by s
 * @s: constant byte
 * @b: memory area pointer
 *
 * Return: a pointer tothe memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x = 0;

	while (x < n)
	{
		s[x] = b;
		x++;
	}
	return (s);
}
