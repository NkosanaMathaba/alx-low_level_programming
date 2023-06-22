#include <stdio.h>

/**
 * main - prints the alphabet in upper and lowercase
 *
 * Return: Always (0) Success
 */

int main(void)
{
	char a, l = 'A';

	for (a = 'a'; a <= 'z'; a++)
		putchar(a);
	while (l <= 'Z')
	{
		putchar(l);
		l++;
	}
	putchar('\n');
	return (0);
}
