#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc.
 * Returns a pointer to the allocated memory.
 * If malloc fails, the malloc_checked function[...]
 * should cause normal process termination[...]
 * with a status value of 98.
 *
 * @b: size (in bytes)
 * Return: void printer
 */
void *malloc_checked(unsigned int b)
{
void **arr;

arr = malloc(b);
if (arr == NULL)
exit(98);
return (arr);
}

