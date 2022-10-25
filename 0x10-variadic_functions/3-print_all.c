#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - prints anything.
 * @format: a list of types of arguments passed to the function
 * c = char, i = integer, f = float, s = char * (if null print (nil))
 *
 * Return: 0.
 */
void print_all(const char * const format, ...)
{
	va_list valist;
	int n = 0, i = 0;
	char *sep = ", ";
	char *str;

	va_start(va_list, format);

	while (format && format[i])
		i++;

	while (format && format[n])
	{
		if (n == (i - 1))
		{
			sep = "";
		}
		switch (format[n])
		{
			case 'c':
				printf("%c%s", va_arg(args, int) sep);
				break;
			case 'i':
				printf("%d%s", va_arg(args, int) sep);
				break;
			case 'f':
				printf("%f%s", va_arg(args, int) sep);
				break;
			case 's':
				str = va_arg(args, char *);
				if (str == NULL)
					str = "(nil)";
				printf("%s%s", str, sep);
				break;
		}
		n++;
	}
	printf("\n");
	va_end(valist);
}
