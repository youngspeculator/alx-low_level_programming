#include "main.h"
#include <stdio.h>

/**
 * is_palindrome - returns 1 if a string is a palindrome and 0 if not
 * An empty string is a palindromei
 * A palindrome is a word/phrase/sentence that reasa the same fwd and back
 * @s: string input
 * Return: 1 if str is palindrome, 0 if not.
 */
int is_palindrome(char *s)
{
	int len = _strlen_recursion(s);
	int count = 0;

	return (checker(s, len - 1, count));
}

/**
 * _strlen_recursion - returns the length of a string
 * @s: string input
 * Return: length of the str
 */
int _strlen_recursion(char *s)
{
	if (*s)
	{
		s++;
		return (1 + _strlen_recursion(s));
	}
	return (0);
}

/**
 * checker - helper function for is_palindrome
 * @str: string input
 * @len: length of string
 * @count: counter of recursion
 * Return: 1 if str is palindrome, 0 if not.
 */
int checker(char *str, int len, int count)
{
	if (count >= len)
		return (1);
	if (str[len] == str[count])
		return (checker(str, len - 1, count + 1));
	return (0);
}
