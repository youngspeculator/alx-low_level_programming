#include "main.h"

/**
 * _strcat - function that concatenates two strings
 * overwriting the terminating null byte (\0) at the end of dest,
 * and then adds a terminating null byte
 *
 * @dest: 1st string
 * @src: 2nd string
 * Return: char pointer
 */

char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;
	char *p;

	while (*(dest + i) != '\0')
		i++;
	while (*(src + i) != '\0')
	{
		*(dest + i) = *(src + j);
		i++;
		j++;
	}
	*(dest + i) = '\0';
	p = dest;
	return (p);
}
