#include "lists.h"
/**
 * insert_nodeint_at_index - Insert a node at a given index
 * @head: The head of the list
 * @idx: The index where the new node should be inserted
 * @n: The value of the node
 *
 * Return: The newly inserted node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node = NULL;
	unsigned int counter = 0;

	if (head != NULL)
	{
		new_node = check_node_to_insert(*head, idx, n, counter);
	}
	return (new_node);
}
/**
 * check_node_to_insert - Check the node position
 * @node: The current node
 * @idx: The postion of the node
 * @n: The data value of the node
 * @counter: The position counter
 *
 * Return: A pointer to the node finded
 */
listint_t *check_node_to_insert(listint_t *node,
		unsigned int idx, int n, unsigned int counter)
{
	listint_t *next_node;
	listint_t *new_node;

	if (counter + 1 == idx)
	{
		new_node = malloc(sizeof(listint_t));
		if (new_node == NULL)
			return (NULL);
		next_node = node->next;

		new_node->n = n;
		new_node->next = next_node;

		node->next = new_node;
		return (new_node);
	}
	return (node->next == NULL ? NULL : check_node_to_insert(node->next,
				idx, n,  ++counter));
}
