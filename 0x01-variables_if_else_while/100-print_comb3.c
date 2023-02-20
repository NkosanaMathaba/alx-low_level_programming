#include <stdio.h>

/**
 * main - Program that prints all possible different combinations of two digits
 *
 * Return: Always (0) Success
 */
int main(void)
{
	int n;
	int p;

	for (n = 0 ; n < 100; n++)
	{
		for (p = n + 1; p <= 9; p++)
		{
			putchar(n + '0');
			putchar(p + '0');

			if (n == 8 && p == 9)
				continue;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
