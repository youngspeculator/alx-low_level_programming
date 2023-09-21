#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * stringlen - calculates length of string
 * @str: pointer to string
 * Return: length of string
 */
unsigned int stringlen(const char *str)
{
unsigned int i = 0;

while (str[i] != '\0')
{
i++;
}
return (i);
}
/**
 * add_node_end - adds a new node at the end of a linked list
 * @head: pointer to the head of the list
 * @str: string to add tpo the string field of the structure added
 * Return: the address of the new element or NULL if fail
 */
list_t *add_node_end(list_t **head, const char *str)
{
list_t *new;
list_t *end;

end = *head;

new = malloc(sizeof(list_t));
if (new == NULL)
return (NULL);
new->str = strdup(str);
new->len = stringlen(str);
new->next = NULL;
if (end == NULL)
*head = new;
else
{
while (end->next != NULL)
end = end->next;
end->next = new;
}
return (new);
}
