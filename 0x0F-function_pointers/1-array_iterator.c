#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a parameter[...]
 * on each element of an array.
 * @size: size of an array
 * @action: pointer to the function you need to use.
 * Return: Nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && size > 0 && action)
		for (i = 0; i < size; i++)
			action(array[i]);
}
