#include "main.h"

/**
 * _isalpha - checks for an alphabetic character
 *
 * @c: character being checked
 *
 * Return: 1 if it's an alphabet, otherwise 0
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
	return (0);
}
