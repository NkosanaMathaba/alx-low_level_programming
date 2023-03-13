#include <stdio.h>

/**
 * main - Entry Point
 *
 * @argc: Argument Count
 * @argv: Argument Vector
 *
 * Return: Always (0) Success
 */

int main(int argc, char **argv)
{
	(void)argv;

	printf("%d\n", argc - 1);
	return (0);
}
