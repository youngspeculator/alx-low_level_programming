#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen_recursion - returns the length of a string
 * @s: input
 * Return 0 on success
 * Return: non-zero value upon failure
 */
int _strlen_recursion(char *s)
{
	/*base case is an empty str*/
	if (*s == '\0')
		return (0);

	/*Recurse for the rest of the string and add 1 for the current char*/
	return (_strlen_recursion(s + 1) + 1);
}
