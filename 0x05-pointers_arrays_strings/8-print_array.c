#include <stdio.h>
#include "main.h"

/**
 * print_array - prints n elements of an array of integers followed by new line
 * numbers should be displayed in same order as they are stored in the array
 * @a: array name
 * @n: number of elements of array to be printed
 * Return: (0)
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < (n - 1); i++)
		printf("%d, ", a[i]);
	if (i == (n - 1))
		printf("%d", a[n - 1]);

	printf("\n");
}
