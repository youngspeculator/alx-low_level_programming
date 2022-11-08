#include "main.h"

/**
 * set_bit - a function that sets the value of a bbit to 1 at a given index
 * @n: the unsigned long integer input
 * @index: the index starting from 0 of the bit you want to set
 * Return: 1 on success, or -1 upon error
 */
int set_bit(unsigned int long int *n, unsigned int index)
{
	if (index > (8 * sizeof(*n)) - 1)
		return (-1);
	*n = *n | (1 << index);
	return (1);
}
