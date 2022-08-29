#include "lists.h"
/**
 * print_dlistint - A function that  print all elements of a dlistint_t
 * @h: const dlistint_t pointer
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	check_next(h, &count);
	return (count);
}

/**
 * check_next - Check next node
 * @node: const dlistint_t pointer*
 * @count: The number of elements
 */
void check_next(const dlistint_t *node, size_t *count)
{
	if (node != NULL)
	{
		(*count)++;
		printf("%d\n", node->n);
		check_next(node->next, count);
	}
}
