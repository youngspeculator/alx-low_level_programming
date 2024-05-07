#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * _strlen - gets length of the string
 * @stringy: string
 * Return: length of the string
 */
int _strlen(const char *stringy)
{
int index;
for (index = 0; stringy[index]; index++)
;
return (index);
}


/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: current place in the list
 * @str: string to add to the head
 * Return: pointer to current position in list
 */
list_t *add_node(list_t **head, const char *str)
{
int index, length;
char *content;
list_t *new;

if (str == NULL || head == NULL)
return (NULL);

length = _strlen(str);
new = *head;
content = malloc((length + 1) * sizeof(char));
if (content == NULL)
return (NULL);

for (index = 0; str[index]; index++)
content[index] = str[index];

new = malloc(sizeof(list_t));
if (new == NULL)
{
free(content);
return (NULL);
}

new->str = content;
new->length = length;
new->next = *head;
*head = new;
return (new);
}
