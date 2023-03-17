#include "lists.h"
/**
 * get_dnodeint_at_index - Get a node at index
 * @head: A pointer to the head of the dlinked list
 * @index: The index of the node
 *
 * Return: The node or NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int idx = 0;
	dlistint_t *node = head;

	while (node != NULL)
	{
		if (index == idx)
			return (node);
		node = node->next;
		idx++;
	}
	return (NULL);
}
