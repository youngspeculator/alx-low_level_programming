#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings.
 * Returned pointer shall point to a newly allocated space in memory,[...]
 * which contains s1, followed by the first n bytes of s2, and null terminated
 * If the function fails, it should return NULL
 *
 * If n is greater or equal to the length of s2 then use the entire string s2
 * if NULL is passed, treat it as an empty string
 *
 * @s1: string 1 pointer
 * @s2: string 2 pointer
 * @n: number of bytes
 * Return: pointer to a newly allocated space in memory [...]
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int index, index2, len1, len2;

	if (s1 == 0)
		s1 = "";
	if (s2 == 0)
		s2 = "";
	len1 = 0;
	while (*(s1 + len1))
		len1++;
	len2 = 0;
	while (*(s2 + len2))
		len2++;
	if (n >= len2)
		n = len2;
	str = malloc(sizeof(char) * (len1 + n + 1));
	if (str == 0)
		return (0);
	for (index = 0; index < len1; index++)
		*(str + index) = *(s1 + index);
	for (index2 = 0; index2 < n; index2++)
		*(str + index2) = *(s2 + index2);
	*str + index = '\0';
	return (str);
}
