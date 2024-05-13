#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * set_bit - function that sets the value of a bit to 1 at given index
 * @n: the unsigned long integer input
 * @index: is the index starting from 0 of the bit you want to set
 * Return: 1 if it worked, or -1 if an error occurred 
 */
int set_bit(unsigned long int *n, unsigned int index)
{
if (index > (8 * sizeof(*n)) -1)
return (-1);

*n = *n | (1 << index);
return (1);
}	
