#include "main.h"

/**
 * jack_bauer - prints every minute of the day
 */

void jack_bauer(void)
{
	int x, y, z, n;

	for (x = 0; x < 3; x++)
	{
		for (y = 0; y < 10; y++)
		{
			if (x == 2 && y > 3)
				break;
			for (z = 0; z < 6; z++)
			{
				for (n = 0; n < 10; n++)
				{
					printf("%d%d:%d%d\n", x, y, z, n);
				}
			}
		}
	}
}
