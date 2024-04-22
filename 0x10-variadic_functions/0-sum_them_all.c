#include <stdarg.h>
#include <stdio.h>

/**
 * sum_them_all - returns the sum of all its parameters
 * bz - argument pointer
 * @n: argument counter
 * Return: int
 */
int sum_them_all(const unsigned int n, ...)
{
va_list bz; /*declare argument pointer variable*/
unsigned int cntr;
int sum;

va_start(bz, n); /*initialize the argument list*/

sum = 0;
for (cntr = 0; cntr < n; cntr++)
sum += va_arg(bz, int); /*get the optional args*/

va_end(bz); /*done using the arg pointer variable*/
return (sum);
}
