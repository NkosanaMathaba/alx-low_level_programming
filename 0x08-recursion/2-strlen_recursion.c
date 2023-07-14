#include"main.h"

/**
 * _strlen_recursion - prints out the length of the string
 * @s: string being calculated
 *
 * Return: Returns string length
 */

int _strlen_recursion(char *s)
{
	int count = 0;

	if (*s != '\0')
	{
		count++;
		_strlen_recursion(s + 1);
		count += _strlen_recursion(s + 1);
	}
	return (count);
}
