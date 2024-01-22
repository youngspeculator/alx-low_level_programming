#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse
 * @s: input
 * Return: Always 0 (Success)
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1); /*recurs for the rest of the string*/
		_putchar(*s); /*prints the current char*/
	}
	else
		return;
}
