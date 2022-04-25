#include "lists.h"
/**
 * print_listint - Print all the elements of a listint_t
 * @h: A pointer to the listint_t struct
 *
 * Return: The number of nodes
 */
size_t print_listint(const listint_t *h)
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
	{
		printf("%d\n", node->n);
		return (find_next_node(node->next, ++number));
	}
	return (number);
}
