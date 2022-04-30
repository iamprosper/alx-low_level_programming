#include "main.h"
/**
 * print_binary - Print the binary representation of a number
 * @n: The decimal number
 */
void print_binary(unsigned long int n)
{
	listint_t *head = NULL;
	int r = 0;
	int q = 0;
	unsigned int div = 0;

	if (n == 0)
		_putchar('0');
	if (n > 0)
	{
		div = n;
		do {
			q = div >> 1;
			r = div - (q * 2);
			add_nodeint(&head, r);
			div = q;
		} while (q != 0);
	}

	if (head != NULL)
	{
		print_listint(head);
		free_listint(head);
	}
}
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
		_putchar(node->n + '0');
		return (find_next_node(node->next, ++number));
	}
	return (number);
}
