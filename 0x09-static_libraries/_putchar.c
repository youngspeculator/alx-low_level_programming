#include <unistd.h>

/**
 * _putchar - writes the character to stdout
 * @c: the char to write
 * Return: integer value of char printed
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
