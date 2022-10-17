#include <stdio.h>
/**
 * main- program that prints the alphabet in lowercase followed by a new line.
 * only use the putchar function
 * All your code should be in the main function
 * You can only use putchar twice in your code
 * Return: Always 0 (Success)
 */
int main(void)
{
	char low;

	for (low = 'a'; low <= 'z'; low++)
	putchar(low);
	printf("\n");

	return (0);
}
