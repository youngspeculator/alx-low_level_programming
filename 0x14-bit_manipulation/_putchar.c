#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * putchar - prints c to the standard output
 * @c: the character to be printed
 *
 * Return: On success; 1
 * On error, -1 is returned, and errno is set appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
