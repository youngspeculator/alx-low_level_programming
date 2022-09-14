#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
 * main - Entry point
 *
 * Description: 'Print alphabet in lower case'
 *
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
