#include "function_pointers.h"

/**
 * int_index - returns the index of element 1[...]
 * for which the cmp function does not return 0.
 * @array: array
 * @size: the number of elements in the array array
 * @cmp: a pointer to the function to be used to compare values
 *
 * If size <= 0, return -1
 * Return: -1 if no element matches
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp && size > 0)
		for (i = 0; i < size; i++)
			if (cmp(array[i]))
				return (i);
	return (-1);
}
