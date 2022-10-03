#include "main.h"

/**
 * is_prime_number - return 1 if the input integer is a prime number
 * otherwise return 0
 *
 * @n: number
 * Return: int
 */
int is_prime_number(int n)
{
	int i = 2;

	if (n <= i)
		return (n == i ? 1 : 0);
	if (n % i == 0)
		return (0);
	return (1);
}

/**
 * is_prime - return 1 if the input integer is a prime number
 * otherwise return 0
 *
 * @n: number
 * @i: dividend
 * Return: int
 */
int is_prime(int n, int i)
{
	if (n != i && n % i == 0)
		return (0);
	else if (n == 1)
		return (1);
	return (is_prime(n, i + 1));
}
