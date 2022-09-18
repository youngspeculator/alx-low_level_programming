#include <stdio.h>

/**
 * print_most_numbers - prints the numbers from 0 to 9 followed by a new line
 * do not print 2 and 4
 *
 * Return: (0)
 */

void print_most_numbers(void)
{
	int c = 48;

	while (c < 58)
	{
		if (!(c == 50 || c == 52))
			putchar(c);
		c++;
	}
	putchar('\n');
}
