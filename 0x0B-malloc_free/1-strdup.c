#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * returns a pointer to a new string which is a duplicate of the string str.
 * Memory for the new string is obtained with malloc & can be freed with free
 *
 * Returns NULL if str = NULL
 * On success, the _strdup function returns a pointer to the duplicated string
 * It returns NULL if insufficient memory was available
 *
 * @str: string to duplicate
 * Return: char pointer
 */
char *_strdup(char *str)
{
	char *sd;
	unsigned int size = 0, i;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		size++;
	sd = malloc(sizeof(char) * (size + 1));
	if (sd == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		sd[i] = str[i];
	sd[size] = '\0';
	return (sd);
}
