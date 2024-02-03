#include <stdio.h>

/**
 * _puts_recursion() - prints a string recursively follwed by '\n' 
 *
 */

void _puts_recursion(char *s)
{	
	/* base case to check if current char is null terminator */
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}

	_putchar(*s);
	_puts_recursion(s + 1);/* recursion moves to the next char*/
	/*_putchar(*s); prints the current character */	
}
