#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - a function that prints numbers, followed by a new line.
 * @separator: the string to be printed between numbers
 * @n: the number of integers passed to the function
 * If separator is NULL, don’t print it
 *
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list print;
unsigned int i;

va_start(print, n);

if (separator == NULL)
separator = "";

for (i = 0; i < n; i++)
{
printf("%d", va_arg(print, const unsigned int));

if (i != (n - 1))
printf("%s", separator);
}
printf("\n");
va_end(print);
}
