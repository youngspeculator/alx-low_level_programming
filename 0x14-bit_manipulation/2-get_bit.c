#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * get_bit - function that returns the value of a bit at a given index
 * @index: index starting from 0 of the bit you want to get
 * @n: unsigned long integer input
 * Return: the value of the bit at index or -1 upon error
 */
int get_bit(unsigned long int n, unsigned int index)
{
return ((index > (8 * sizeof(n) - 1)) ? -1 : (int)(n >> index) & 1);
}
