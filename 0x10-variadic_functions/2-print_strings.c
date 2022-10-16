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
	va_list valist;
	unsigned int i;
	char *str;

	if (separator == NULL)
		return;

	va_start(valist, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(valist, char *);
		if (str == NULL)
		{
			str = "(nil)";
		}
		printf("%s", str);
		if (i != (n - 1))
		{
			printf("%s", separator);
		}
	}
	printf("\n");

	va_end(valist);
}
