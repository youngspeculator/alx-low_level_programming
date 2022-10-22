#include "main.h"

/**
 * leet - encodes a string into 1337
 * letters a and A should be replaced with 4
 * letters e and E should be replaced with 3
 * letters o and O should be replaced with 0
 * letters t and T should be replaced with 7
 * letters l and L should be replaced with 1
 *
 * @s: char string pointer
 * Return: char string pointer
 */
char *leet(char *s)
{
	int i, j;
	char subs[] = "aAeEoOtTlL";
	char le[] = "43071";

	i = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; subs[j] != '\0'; j++)
			if (subs[j] == s[i])
				s[i] = le[j / 2];
	}
	return (s);
}
