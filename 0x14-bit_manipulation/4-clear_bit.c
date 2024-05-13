#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * clear_bit - function that sets the value of a bit to 0 at a given index
 * @index: index, starting from 0 of the bit you want to set
 * @n: unsigned long integer that we will input
 * Return: 1 if success is achieved or -1 if an error occured
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
*n = *n & ~(1 << index);
return ((index > 8 * sizeof(*n)) ? -1 : 1);
}
