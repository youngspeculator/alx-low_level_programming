#include <stdio.h>
#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse
 */
void _print_rev_recursion(char *s)
{
	// check if the current character is null terminator 
	if (*s == '\0')
	{
		return;
	}

	_print_rev_recursion(s + 1); // recurs for the rest of the string  
	_putchar(*s); // prints the current char
}
