#include "main.h"
/**
 * print_alphabet - prints the alphabet in lowercase followed by a new line
 *
 * prototype void print_alphabet(void);
 *
 * can only use _putchar twice in the code
 *
 * Return: Always 0 (Success)
 */

void print_alphabet(void)
{
	int n;

	for (n = 'a'; n <= 'z'; < n++)
	{
		_putchar(n);
	}
	_putchar('\n');
}
