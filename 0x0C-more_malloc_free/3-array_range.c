#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * array_range - creates an array of integers.
 * The array created contains the values from min (incl) to max (incl) [...]
 * ordered from min to max.
 * Return: the pointer to the newly created array
 *
 * If min > max, return NULL
 * If malloc fails, return NULL
 * @max: max input
 * @min: min input
 */
int *array_range(int min, int max)
{
	int *arr;
	int i, len;

	if (min > max)
		return (NULL);

	for (len = 0; len < (max - min); len++)
		;

	arr = malloc(sizeof(int) * (len + 1));
	if (arr == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
	{
		arr[i] = min++;
	}

	return (arr);
}
