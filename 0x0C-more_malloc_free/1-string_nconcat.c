#include "main.h"
#include <stdio.h>
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
 * Return: Null upon failure.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *p;
unsigned int i, j, ns, x;

if (s1 == 0)
s1 = "";
if (s2 == 0)
s2 = "";

for (i = 0; s1[i] != '\0'; i++)
;
for (j = 0; s2[j] != '\0'; j++)
;
if (n > j)
n = j;
ns = i + n;
p = malloc(ns + 1);
if (p == NULL)
return (NULL);
for (x = 0; x < ns; x++)
if (x < i)
p[x] = s1[x];
else
p[x] = s2[x - i];
p[x] = '\0';
return (p);
}

