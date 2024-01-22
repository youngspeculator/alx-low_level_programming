#include <stdio.h>

/**
 * _strlen_recursion - returns the length of a string
 * @s: input
 * Return 0 on success
 *
 */
int _strlen_recursion(char *s)
{
	// base case checks if the current character is a null terminator
	if (*s == '\0')
		return (0);

	// Recurse for the rest of the string and add 1 for the current char*/
	return 1 + _strlen_recursion(s + 1);
}
