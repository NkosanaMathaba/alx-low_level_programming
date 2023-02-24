#include "main.h"

/**
 * _isupper - checks for uppercase characters
 *
 * @c: single character
 * Return: (0) success
 * (1) if c is upper case
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')

		return (1);
	else
		return (0);
}
