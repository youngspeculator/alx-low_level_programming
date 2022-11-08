#include "main.h"

/**
 * clear_bit - a function that sets the value of a bit to 0 at a given index
 * @index: the index, starting from 0, of the bit you want to set
 * @n: unsigned long integer input
 * Return: 1 on success, -1 on error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	*n = *n & ~(1 << index);
	return ((index > 8 * sizeof(*n)) ? -1 : 1);
}
