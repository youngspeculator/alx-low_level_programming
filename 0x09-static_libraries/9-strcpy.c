#include "main.h"

/**
 * char *_strcpy - copies the string pointed to by src,
 * including the terminating null byte (\0), to the buffer pointed to by dest
 * @dest: copy to
 * @src: copy from
 * Return: string
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (i >= 0)
	{
		dest[i] = src[i];
	if (src[i] == '\0')
		return (dest);
	i++;
	}
	return (dest);
}
