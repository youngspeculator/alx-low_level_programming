#include <stdio.h>
#include "main.h"

/**
 * strlen_recursion - returns the length of a string
 * return 0 on success 
 */
int _strlen_recursion(char *s)
{
	/* base case to check if current character is '\0'*/
	if (*s == '\0')
	{
		return 0;
	}

	return (1 + _strlen_recursion(s + 1));
}
