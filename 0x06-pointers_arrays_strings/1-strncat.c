#include "main.h"

/**
 * _strncat - concatenates two strings
 * it will use at most n bytes from src
 * src does not need to be null-terminated if it contains n or more bytes
 *
 * @dest: 1st string
 * @src: 2nd string
 * @n: number of char to include from appeded string
 * Return: string pointer
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	for (j = 0; dest[j] != '\0'; j++)
		;
	while (src[i] != '\0' && i < n)
	{
		dest[i + j] = src[i];
		i++;
	}
	return (dest);
}

