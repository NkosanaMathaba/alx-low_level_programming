#include <stdio.h>

/**
 * main - Program writes every possible combination
 *
 * Return: Always (0) Success
 */
int main(void)
{
	int p, m;

	for (p = 0; p < 99; p++)
	{
		for (m = 0; m < 100; m++)
		{
			if (p < m)
			{
				putchar((p / 10) + '0');
				putchar((p % 10) + '0');
				putchar(' ');
				putchar((m / 10) + '0');
				putchar((m % 10) + '0');
				if (p != 98 || m != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
