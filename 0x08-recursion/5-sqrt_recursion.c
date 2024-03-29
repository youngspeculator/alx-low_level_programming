#include <stdio.h>
#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to be compared
 * Return: 0 if n is 0 or less than 0
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (0);
	}

}

/**
 * tester - tests the input
 * @n: number to be compared
 * @base: base to check
 * Return: natural sqaure root of a number
 */
int tester(int n, int base)
{
	if (base * base == n)
		return (n);
	if (base * base > n)
		return (-1);
	return (tester(n, base + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * tester - checks whether or not number is perfect square
 * @n: input
 * if n does not have a natural square root, the function should return -1
 *
 * Return: the natural sqaure root of number n
 */
int _sqrt_recursion(int n)
{
	return (tester(n, 2));
}
