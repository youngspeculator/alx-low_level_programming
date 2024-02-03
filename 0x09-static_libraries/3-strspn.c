#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: input
 * @accept: input
 * Return: number of bytes in the initial segment of s
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, len = 0, match = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				len++;
				break;
			}
		}
		if (len != 0)
			match++;
		if (match != len)
			return (len);
	}
	return (0);
}
