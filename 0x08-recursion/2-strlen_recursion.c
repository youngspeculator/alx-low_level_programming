#include <stdio.h>
#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: the character being checked on the string
 * Return: the integer result
 */
int _strlen_recursion(char *s)
{
	/* base case to check if current character is '\0'*/
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
