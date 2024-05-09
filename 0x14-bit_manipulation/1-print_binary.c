#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * print_binary - funciton that prints the binary representation of a number
 * @n: integer to be converted to binary representation
 * you are allowed to use arrays
 * you are not allowed to use malloc
 * you are not allowed to use the % or / operators
 */
void print_binary(unsigned long int n)
{
int index, flag;

if (n == 0)
_putchar('0');

for (flag = 0, index = sizeof(n) * 8 - 1; index >= 0; index--)
{
if ((n >> index) & 1)
flag = 1;

if (flag == 1)
((n >> index) & 1) ? _putchar('1') : _puthcar('0');
}

}
