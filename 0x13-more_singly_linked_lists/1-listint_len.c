#include "lists.h"
/**
 * listint_len - Get the number of elements in a linked list
 * @h: A pointer to the structure
 *
 * Return: The size of the list
 */
size_t listint_len(const listint_t *h)
{
	size_t n = 0;

	n = find_next_node(h, n);
	return (n);
}

/**
 * find_next_node - Find the next node
 * @node: A pointer to the next node
 * @number: The number of nodes
 *
 * Return: The number of nodes
 */
size_t find_next_node(const listint_t *node, size_t number)
{
	if (node != NULL)
		return (find_next_node(node->next, ++number));
	return (number);
}
