#include "3-calc.h"
#include <stdio.h>

/**
 * op_add - adds 2 integers
 * @a: integer 1
 * @b: integer 2
 *
 * Return: integer
 */
int op_add(int a, int b)
{
int sum;

sum = a + b;
return (sum);
}

/**
 * op_sub - subtracts 1 integer from another
 * @a: integer 1
 * @b: integer 2
 *
 * Return: integer
 */
int op_sub(int a, int b)
{
int dif;

dif = a - b;
return (dif);
}

/**
 * op_mul - multiplies 2 integers
 * @a: integer 1
 * @b: integer 2
 *
 * Return: integer
 */
int op_mul(int a, int b)
{
int prd;

prd = a * b;
return (prd);
}

/**
 * op_div - divides 1 integer by another
 * @a: integer 1
 * @b: integer 2
 *
 * Return: integer
 */
int op_div(int a, int b)
{
int div;

div = a / b;
return (div);
}

/**
 * op_mod - returns the remainder of the division of a by b
 * @a: integer 1
 * @b: integer 2
 *
 * Return: integer
 */
int op_mod(int a, int b)
{
int mod;

mod = a % b;
return (mod);
}
