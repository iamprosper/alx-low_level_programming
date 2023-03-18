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
	dlistint_t *last_node;
	unsigned int index = 0;

	if (new == NULL)
		return (NULL);
	if (idx == 0)
	{
		new->n = n;
		if (*h != NULL)
			insert_top(*h, new);
		*h = new;
		return (new);
	}
	while (index <= idx)
	{
		if (idx == index)
		{
			new->n = n;
			if (node != NULL)
			{
				insert_middle(node, new);
			}
			else
			{
				new->prev = last_node;
				last_node->next = new;
			}
			return (new);
		}
		if (node == NULL)
			break;
		last_node = node;
		node = node->next;
		index++;
	}
	return (NULL);
}

/**
  * insert_middle - Insert a new node at the middle of the list
  * @curr_node: The current node
  * @new: The new node
  *
  * Return: Nothing
  */
void insert_middle(dlistint_t *curr_node, dlistint_t *new)
{
	new->prev = curr_node->prev;
	new->next = curr_node;
	curr_node->prev->next = new;
	curr_node->prev = new;
}

/**
  * insert_top - Insert a new node at the top of the list
  * @head: The head of the list
  * @new: Thr new node
  *
  * Return: Nothing
  */
void insert_top(dlistint_t *head, dlistint_t *new)
{
	head->prev = new;
	new->next = head;
}
