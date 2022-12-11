#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_end
 * @head: a pointer to the head of the dlistint_t list
 * @n: intger for the new node to contain
 *
 * Return: if function fails, NULL; otherwise - address of new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *last;

	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
		return (new);
	}
	last = *head;
	while (last->next != NULL)
		last = last->next;
	last->next = new;
	new->prev = last;

	return (new);
}
