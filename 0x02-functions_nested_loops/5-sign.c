#include "main.h"

/**
 * print_sign - prints the sign of a number.
 *
 * @n: positive, zero or negative integer
 *
 * Return: (1) if n is +ve, returns (0) if n is zero, and (-1) if n is -ve
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar ('+');
		return (1);
	}

	else if (n < 0)
	{
		_putchar ('-');
		return (-1);
	}

	else
	{
		_putchar ('0');
		return (0);
	}
}
