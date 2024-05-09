#include <stdio.h>
#include <stdlib.h>

/**
 * binary_to_uint - function that converts a binary number to an unsigned int
 * @b: is pointing to a string of 0 and 1 chars
 * Return: the converted number or 0 if:
 *  there is one or more chars in the sring b that is not 0 or 1
 *  b in NULL
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int index;
int length, baseTwo;

if (!b)
return (0);

index = 0;

for (length = 0; b[length] != '\0'; length++)
;

for (length--, baseTwo = 1; length >= 0; length--, baseTwo *= 2)
{
if (b[length] != '0' && b[length] != '1')
return (0);

if (b[length] & 1)
index += baseTwo;
}
return (index);
}
