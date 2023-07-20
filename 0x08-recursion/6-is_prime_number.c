#include "main.h"

/**
 * PRIME - checks integer to see if it's a prime number
 * @num: runs checks from 1 to n
 * @check: inteer same as n variable
 *
 * Return: int
 */

int PRIME(int check, int num)
{
	if (check < 2 || num % check == 0)
		return (0);
	if (check > num / 2)
		return (1);

	return (PRIME(check, num + 1));
}

/**
 * is_prime_number - returns 1 if integer is a prime number, else 0
 * @n:intger being checked
 *
 * Return: 1 if prime number otherwise returns 0
 */

int is_prime_number(int n)
{
	return (PRIME(n, 1));
}
