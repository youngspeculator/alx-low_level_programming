#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 *
 * @n: integer whose last digit will be printed
 *
 * Return: int
 */
int print_last_digit(int n)
{
	int last_digit;

		if (n < 0)
		{
			last_digit = -1 * (n % 10);

			_putchar (last_digit + 48);

			return (last_digit);
		}

		else
		{
			last_digit = 1 * (n % 10);

			_putchar (last_digit + 48);

			return (last_digit);
		}
}
