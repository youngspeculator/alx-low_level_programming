#include "main.h"

/**
 * _strncat - concatenates two strings
 * it will use at most n bytes from src
 * src does not need to be null-terminated if it contains n or more bytes
 *
 * @dest: 1st string
 * @src: 2nd string
 * @n: number of char to include from appeded string
 * Return: char pointer
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;
	char *p;

	while (*(dest + i) != '\0')
		i++;
	while (*(src + j) == '\0' || j == n)
	{
		*(dest + i) = *(src + j);
		i++;
		j++;
	}
	*(dest + i) = '\0';
	p = dest;
	return (p);
}
