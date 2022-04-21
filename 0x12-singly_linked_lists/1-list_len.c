#include "lists.h"
/**
 * list_len - Get the number of elements in a linked list
 * @h: The linked list
 *
 * Return: The length of the list
 */
size_t list_len(const list_t *h)
{
	size_t len = 0;

	return (check_next(h, len));
}

/**
 * check_next - Get The next node
 * @h: The pointer to the current node
 * @n: The number of nodes
 *
 * Return: The number of nodes
 */
size_t check_next(const list_t *h, size_t n)
{
	if (h != NULL)
	{
		n++;
		return (check_next(h->next, n));
	}
	return (n);
}
