#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - a function that prints anything
 * @format: a list of types of arguments passed to the function
 * @c: character
 * @i: int
 * @f: float
 * @s: char * (if the str is NULL, print (nil))
 * ignore any other char
 * not allowed to use for, goto, ternery operator, else, do ... while
 * you can use a max of 2 while , 2 if loops
 * you can declare a max of 9 varaibles
 * you are allowed to use printf
 * print a new line at the end of your function
 */
void print_all(const char * const format, ...)
{
va_list ap;
int n = 0, i = 0;
char *sep = ", ";
char *str;

va_start(ap, format);
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
printf("%c%s", va_arg(ap, int), sep);
break;

case 'i':
printf("%d%s", va_arg(ap, int), sep);
break;

case 'f':
printf("%d%s", va_arg(ap, int), sep);
break;

case 's':
str = va_arg(ap, char *);
if (str == NULL)
str = "(nil)";

printf("%s%s", str, sep);
break;
}
n++;
}
}
