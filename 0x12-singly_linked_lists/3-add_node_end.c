#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * my_strlen - function to calculate the length of a string
 * @str: pointer to string
 * Return: length of a string
 */
unsigned int my_strlen(const char *str)
{
unsigned int index = 0;
while (str[index] != '\0')
{
index++;
}
return (index);
}



/**
 * add_node_end - function that adds a new node at the end of a [list_t] list
 * @head: pointer to the head of the list
 * @str: string to add to the string field of the structure added
 * Return: the address of the new element, or NULL if it failed
 * str needs to be duplicated
 * Not allowed to use strdup
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
new->length = my_strlen(str);
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
