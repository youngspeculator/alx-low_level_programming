#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints all the integers between the number given and 98
 * @n: number to count from
 *
 * Return: void
 */

void print_to_98(int n)
{
	if (n <= 98)
	{
		for (n = n; n <= 97; n++)
			printf("%d, ", n);
	}
	else
		for (n = n; n > 98; n--)
			printf("%d, ", n);
	printf("98\n");
}
