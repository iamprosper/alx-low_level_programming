#include "lists.h"
/**
 * dlistint_len - A function that  print number of elements in a dlistint_t
 * @h: const dlistint_t pointer
 * Return: the number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
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
		check_next(node->next, count);
	}
}
