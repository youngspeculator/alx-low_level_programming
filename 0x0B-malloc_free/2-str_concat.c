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
int count1, count2, concat, i;
char *p;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
for (count1 = 0; s1[count1]; count1++)
;
for (count2 = 0; s2[count2]; count2++)
;
concat =  count1 + count2 + 1;
p = malloc(concat *sizeof(char));
if (p == NULL)
return (NULL);
for (i = 0; i < concat; i++)
i < count1 ? (p[i] = s1[i]) : (p[i] = s2[i - count1]);
return (p);
}

