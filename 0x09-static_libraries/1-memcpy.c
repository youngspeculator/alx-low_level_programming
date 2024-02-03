#include "main.h"

/**
 * _memcpy - copies memory area
 * @src: source
 * @dest: destination
 * @n: bytes of memory to copy
 * Return: pointer
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}

