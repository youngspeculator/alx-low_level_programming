#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - function that prints numbers 
 * @separator: the string to be printed between numbers
 * @n: number of integers passed to the function
 * allowed to use printf
 * if @separator == NULL, don't print it
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list ap; /*define the argument pointer*/
unsigned int count; /*init a counter */
	
va_start(ap, n); /*initialize va_start*/
count = 0; /*no need to init count at 0*/
	
if (separator == NULL) 
separator = "";
	
for (count = 0; count < n; count++)
{
printf("%d", va_arg(ap, const unsigned int));
if (count != (n-1))
printf("%s", separator);
}
printf("\n");
va_end(ap);  
}
