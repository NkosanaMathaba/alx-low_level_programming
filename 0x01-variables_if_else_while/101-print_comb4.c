#include <stdio.h>

/**
 * main - Program writes 3 different combinations
 *
 * Return: Always (0) Success
 */

int main(void)
{
	int p, g, m;

	for (p = 0; p < 8; p++)
	{
		for (g = p + 1; g < 9; g++)
		{
			for (m = g + 1; m < 10; m++)
			{
				putchar((p % 10) + '0');
				putchar((g % 10) + '0');
				putchar((m % 10) + '0');

				if (p == 7 && g == 8 && m == 9)
					continue;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
