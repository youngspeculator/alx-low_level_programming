#include "main.h"
#include <stdlib.h>

/**
 * str_concat - a function that concatenates two strings.
 * @s1: string 1
 * @s2: string 2
 * returned pointer should point to a newly allocated space in memory
 * which contains the contents of s1, followed by the contents of s2
 * if NULL is passed, treat it as an empty string
 * Return: char pointer
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int i = 0, j, size = 0;
	char *str;

	if (s1 != NULL)
		for (i = 0; s1[i] != '\0'; i++)
			size++;
	str = malloc(sizeof(char) * (size + 1));
	if (str == NULL)
		return (NULL);
	if (s1 == NULL && s2 == NULL)
	{
		str[0] = '\0';
		return (str);
	}
	if (s1 != NULL)
		for (i = 0; s1[i] != '\0'; i++)
			str[i] = s1[i];
	if (s1 == NULL)
		i = 0;
	if (s2 != NULL)
		for (j = 0; s2[j] != '\0'; j++)
		{
			str[i] = s2[j];
			i++;
		}
	str[size] = '\0';
	return (str);
}
