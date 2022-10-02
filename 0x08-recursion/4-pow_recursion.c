#include "main.h"

/**
 * _pow_recursion - returns the value of x raised to the power of y
 * @x: input 1 as the base
 * @y: input 2 as the power
 * Return: int x to the power of int y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
