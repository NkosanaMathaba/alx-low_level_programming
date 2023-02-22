#include "main.h"
/**
 * _islower - check for lowercase c
 *
 * Return: (1) if c is lowercase
 * Retrun: (0) otherwise
 */

int _islower(int c)/* @c: parameter being checked */
{
	if (c >= 'a' && c <= 'z')
		return(1);
	else
		return(0);
}
