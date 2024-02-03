#include <stdio.h>
#include "main.h"

/**
 * factorial - returns the factorial of a given number
 * @n: number to be checked
 * Return: int result of factorial calculation
 */
int factorial(int n)
{
	if (n == 0)
	{
		return (1); /* factorial(0) is 1 */
	}
	if (n < 0)
	{
		puts("Error. Number is less than zero");
		return (-1);
	}
	return (n * factorial(n - 1)); /* factorial(n) = n * factorial(n-1)*/
}
