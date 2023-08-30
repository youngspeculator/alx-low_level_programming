#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: input
 * Return 0 on success
 * Return a non-zero value upon failure
 */
int _strlen_recursion(char *s)
{
	int len;

	if (*s == '\0')
		return 0;
	else
		return _strlen_recursion(s + 1) + 1;
	
}
