#include "main.h"
/**
 * _isalpha - checks for alphabetic char
 * Return: (1) c uppercase or lowercase
 * (0) otherwise
 *
 * @c: parameters being checked
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
