#include "lists.h"
/**
 * print_list - Print all the elements of a list_t list
 * @h: A constant pointer to the list
 *
 * Return: The number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t i = 0;

	i = print_node(h, i);

	return (i);
}
/**
 * print_node - Print the content of a node
 * @node: a pointer to the the node
 * @n: The number of nodes
 *
 * Return: The number of nodes
 */
size_t print_node(const list_t *node, size_t n)
{
	if (node != NULL)
	{
		n++;
		if (node->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%i] %s\n", node->len, node->str);
		return (print_node(node->next, n));
	}

	return (n);
}
