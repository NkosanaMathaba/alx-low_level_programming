#include "main.h"

/**
 * is_prime_number - returns 1 if integer is a prime number, else 0
 * @n:intger being checked
 *
 * Return: 1 if prime number otherwise returns 0
 */

int is_prime_number(int n)
{
	int check;

	check = n % 10;

	if (n < 2)
		return (0);
	else if (n % check == 0)
	{
		is_prime_number(check - 1);
		return (0);
	}
	else
		return (1);
}
