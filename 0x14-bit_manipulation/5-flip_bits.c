#include "main.h"

/**
 * flip_bits - a function that returns the number of bits needed to flip to ...
 * get from one number to another
 * You are not allowed to use the % or / operators.
 * @n: input for unsigned long integer
 * @m: unsigned long integer to transform to
 * Return: value of bits needed
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, res;

	res = 0;
	for (i = 8 * sizeof(n) - 1; i >= 0; i--)
		if (((n ^ m) >> i) & 1)
			res++;
	return (res);
}
