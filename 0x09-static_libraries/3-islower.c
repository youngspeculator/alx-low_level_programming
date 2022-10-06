#include "main.h"

/**
 * _islower - function that checks for lowercase character
 *
 * @c: single letter input
 *
 * Return: (1) Success if c is lowercase, return: (0) otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	return (1);

	else
	return (0);
}
