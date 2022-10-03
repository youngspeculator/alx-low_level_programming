#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * squareroot - checks whether or not number is a perfect square.
 * @n: input
 * if n does not have a natural square root, the function should return -1
 *
 * Return: Always 0.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else
		return (squareroot(n, (n + 1) / 2));
}

/**
 * squareroot - checks whether or not number is a perfect square.
 * @n: input
 * @i: counter
 * Return: if square root
 */
int squareroot(int n, int i)
{
	if (i < 1)
		return (-1);
	else if (i * i == n)
		return (i);
	else
		return (squareroot(n, i - 1));
}
