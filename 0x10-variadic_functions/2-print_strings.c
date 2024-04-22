#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - function that prints strings
 * followed by a new line
 * @separator: string to be printed btwn strings
 * @n: number of strings passed to the function
 * if @separator == NULL, don't print it
 * if one of the string is NULL, print (nil)
 * print a new line at the end of function
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list ap; /*initialize a argument pointer*/
unsigned int count; /*counter*/
char *str;

va_start(ap, n);

for (count = 0; count < n; count++)
{
str = va_arg(ap, char *);
if (str == NULL)
printf("(nil)");
else
printf("%s", str);

if (separator == NULL)
separator = "";
if (count != n - 1)
printf("%s", separator);
}
printf("\n");
va_end(ap);
}
