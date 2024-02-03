#include "main.h"

/**
 * _strncpy - copies a string
 * function should work exactly like strncpy
 *
 * @dest: string 1
 * @src: string 2
 * @n: number of char to append
 * Return: Always (0)
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
		if (src[i] == '\0')
		{
			for (j = i; j < n && dest[j] != '\0'; j++)
				dest[j] = '\0';
			break;
		}
		dest[i] = src[i];
	}
	return (dest);
}
