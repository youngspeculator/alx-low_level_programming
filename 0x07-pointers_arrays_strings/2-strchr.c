#include "main.h"
#include <stdio.h>
/**
 * _strchr - locates a character in a string
 * @s: string to be searched
 * @c: character to be searched
 * Return: pointer is successful, return NULL if not successful
 */
char *_strchr(char *s, char c)
{
	do{
		if (*s == c)
		{
			return (s);
		}
	} while (*s++);
	return (NULL);	
}
