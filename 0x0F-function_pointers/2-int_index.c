#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * int_index - is a function that searches for an integer
 * int_index returns the index of the 1st element /
 * for which the cmp function does not return 0.
 * @array: contents of the array
 * @size: the number of elements in the array array
 * @cmp: a pointer to the function to be used to compare values
 *
 * If size <= 0, return -1
 * Return: -1 if no element matches
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int index_counter; /*iterates over the array elems & applies cmp*/

if (array == 0 && cmp == 0 && size == 0)
return (-1);

for (index_counter = 0; index_counter < size; index_counter++)
{
if (cmp(array[index_counter]))
return (index_counter);
}
return (index_counter);
}
