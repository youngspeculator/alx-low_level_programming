#include <stdio.h>
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	int n;

	n = get_bit(1024, 10);
	printf("\n");
	n = get_bit(98, 1);
	printf("\n");
	n = get_bit(1024, 0);
	printf("\n");
	return (0);
}
