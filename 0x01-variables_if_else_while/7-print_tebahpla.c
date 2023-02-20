#include <stdio.h>
/**
 * main - Program prints lowercase alphabet in reverse
 * Return: Always(0) Success
 */

int main(void)
{
	int al;

	for (al = 'z'; al >= 'a'; al--)
	{
		putchar(al);
	}
	putchar('\n');
	return (0);
}
