#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * factorial - returns the factorial of a given number
 * @n: input to factorize
 *
 * Return: integer
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
