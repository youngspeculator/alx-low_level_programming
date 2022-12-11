#include "lists.h"

/**
 * dlistint_len - return number of elements of list
 * @h: head of the list
 *
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *temp = h;
	size_t elem = 0;

	while (temp != NULL)
	{
		temp = temp->next;
		elem += 1;
	}
	return (elem);
}
