#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - prints strings
 * @separator: the string to be printed between the strings
 * @n: the number of strings passed to the function
 *
 * If separator is NULL, don’t print it.
 * If one of the string is NULL, print (nil) instead.
 * Print a new line at the end of your function.
 * Return: void.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list print;
unsigned int i;
char *str;

va_start(print, n);

for (i = 0; i < n; i++)
{
str = va_arg(print, char *);
if (str == NULL)
printf("(nil)");
else
printf("%s", str);
if (separator == NULL)
separator = "";
if (i != n - 1)
printf("%s", separator);
}
printf("\n");
va_end(print);
}
