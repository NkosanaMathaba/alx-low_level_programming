#include "main.h"

/**
 * *_strncpy - copies string
 *
 * @dest: destination String
 * @src: source String
 * @n: int length
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int x;

	for (x = 0; x < n && *(src + x); x++)
	{
		*(dest + x) = *(src + x);
	}
	for (; x < n; x++)
	{
		*(dest + x) != '\0';
	}
	return (dest);
}
