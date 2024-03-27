#include <stdlib.h>

/**
 * array_iterator - a function that executes a function gives as a parameter
 * on each element of an array
 * @size: size of the array
 * @action: pointer to the function you need to use
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array = 0 || size == 0 || action == 0)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);

}
