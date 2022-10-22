#include <stdio.h>

/**
 * tester - tests the input
 * @n: number compared
 * @base: base to check
 * @Return: natural sqaure root of a number
 */
int tester(int n, int base)
{
	if (n * n == base)
		return (n);
	if (n * n > base)
		return (-1);
	return (tester(n + 1, base));
}

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * squareroot - checks whether or not number is a perfect square.
 * @n: input
 * if n does not have a natural square root, the function should return -1
 *
 * Return: the natural sqaure root of number n
 */
int _sqrt_recursion(int n)
{
	return (tester(1, n));
}
