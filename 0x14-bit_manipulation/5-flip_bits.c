#include <stdio.h>
#include "main.h"

/**
 * flip_bits - a function that returns the number of bits needed to flip to ..
 * get from one number to another
 * You are not allowed to use the % or / operators
 * @n: input for unsigned long integer
 * @m: unsigned long integer to transform to
 * Return: value of bits needed
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
int index, result;
result = 0;

for (index = 8 * sizeof(n) - 1; index >= 0; index--)
if (((n ^ m) >> index) & 1)
result++;

return (result);
}
