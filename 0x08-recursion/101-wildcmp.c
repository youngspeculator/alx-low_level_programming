#include <stdio.h>
#include "main.h"

/**
 * wildcmp - compares the strings
 * @s1: string 1
 * @s2: string 2
 * Return: 0 on success
 */

int wildcmp(char *s1, char *s2) {
	// both strings are empty
	if (*s1 == '\0' && *s2 == '\0')
		return 1;
	// if s2 contains a wildcard '*', we can either skip a char in s1 or skip '*'
	if (*s2 == '*'){
		// try skipping '*' in s2
		if (wildcmp(s1, s2 + 1))
			return 1;

		// try skipping a character in s1 and keep '*' in s2
		if (*s1 != '\0' && wildcmp(s1 + 1, s2))
			return 1;
	}

	// if s2 does not contain '*', compare chars and move to the next
	if (*s1 == *s2)
		return wildcmp(s1 + 1, s2 + 1);

	// if chars do not match and s2 does not contain '*', strings are not identical
	return 0;
}
