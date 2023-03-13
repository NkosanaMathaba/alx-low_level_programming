#include <stdio.h>

/**
 * main - Entry Point
 *
 * @argc: Argument Count
 * @argv: Argument Vector
 *
 * Return: Always (0)
 */

int main(int argc, char *argv[])
{
	int x;

	for (x = 0; x < argc; x++)
	{
		printf("%s\n", argv[x]);
	}
	return (0);
}
