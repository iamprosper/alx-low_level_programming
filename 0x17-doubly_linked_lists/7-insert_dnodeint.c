#include "lists.h"
/**
 * insert_dnodeint_at_index - Insert a node at an index
 * @h: The head of the double linked list
 * @idx: The index
 * @n: The value of the node
 *
 * Return: The new node added or NULL
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *node = *h;
	dlistint_t *new = malloc(sizeof(dlistint_t));
	unsigned int index = 0;

	if (new == NULL || index > idx)
		return (NULL);

	while (node != NULL)
	{
		if (idx == index)
		{
			new->n = n;
			new->prev = node->prev;
			new->next = node;

			if (idx == 0)
				*h = new;
			else
			{
				node->prev->next = new;
				node->prev = new;
			}

			return (new);
		}
		node = node->next;
		index++;
	}
	return (NULL);
}
