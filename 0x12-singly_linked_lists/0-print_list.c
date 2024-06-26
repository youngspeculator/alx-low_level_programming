#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * print_list - prints all the elements of a list_t struct
 * @h: pointer to the structure
 * if str is null, print [0] (nil)
 *
 * Return: number of nodes in the list
 */
size_t print_list(const list_t *h)
{
size_t elements = 0; /**initializing the elem struct at 0*/
while (h != NULL)
{
if (h->str == NULL)
{
printf("[0] (nil)\n");
h = h->next;
}
else
{
printf("[%u] %s\n", h->len, h->str);
h = h->next;
}
elements++;
}
return (elements);
}
