#include "lists.h"
/**
 * get_nodeint_at_index - Get a node at an index
 * @head: The head of the list
 * @index: The index of the node
 *
 * Return: A pointer to the list structure
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int n = 0;

	return (check_node(head, index, n));
}
/**
 * check_node - Check the node position
 * @node: The current node
 * @index: The postion of the node
 * @n: The position counter
 *
 * Return: A pointer to the node finded
 */
listint_t *check_node(listint_t *node, unsigned int index, unsigned int n)
{
	if (n == index)
		return (node);
	return (node->next == NULL ? NULL : check_node(node->next, index, ++n));
}

