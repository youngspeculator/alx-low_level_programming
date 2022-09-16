#include "main.h"
/**
 * print_alphabet_x10 - prints x10 the alphabet
 * in lowercase followed by a new line.
 *
 * can only use putchar 2X
 *
 * Return: ALways (0) Success
 */
void print_alphabet_x10(void)
{
	int n, co;

	co = 0;

	while (co < 10)
	{
		for (n = 'a'; n <= 'z'; n++)
		{
			_putchar(n);
		}
		co++;
		_putchar('\n');
	}
}
