#include <stdio.h>
/**
 * main -  prints the alphabet in lowercase, followed by a new line.
 * Print all the letters except q and e
 * only use the putchar function
 * All your code should be in the main function
 * only use putchar twice in your code
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		if (c != 'q' && c != 'e')
		putchar(c);
		c++;
	}
	putchar('\n');

	return (0);
}
