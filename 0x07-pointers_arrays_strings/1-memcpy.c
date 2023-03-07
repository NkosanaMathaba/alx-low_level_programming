#include "main.h"

/**
 * _memcpy - copies n byte from memory are src to memory dest
 *
 * @dest: memory area
 * @src: memory area
 * @n: unsigned int
 *
 * Return: a pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x = 0;

	while (x < n)
	{
		dest[x] = src[x];
		x++;
	}
	return (dest);
}
