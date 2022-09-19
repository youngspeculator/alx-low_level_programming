#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 * @n: length of the line
 *
 * Return: void
 */

void print_line(int n)
{
	int i = 0;

	if (n > 0)
	{
		while (i < n)
		{
			_putchar(95);
			i++;
		}
	}
	_putchar('\n');
}
