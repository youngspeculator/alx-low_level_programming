#include <stdio.h>
/**
 * main - prints alphabet in lowercase then in UPPERCASE followed by newline
 * only use the putchar function.
 * All your code should be in the main function.
 * You can only use putchar three times in your code.
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c = 'a';
	char C = 'A';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	while (C <= 'Z')
	{
		putchar(C);
		C++;
	}
	putchar('\n');

	return (0);
}
