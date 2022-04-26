#include "lists.h"
/**
 * sum_listint - Sum all the data(n) of the nodes
 * @head: The head of the list
 *
 * Return: 0 or the sum the data
 */
int sum_listint(listint_t *head)
{
	int n = 0;

	if (head != NULL)
		n = add_next_data(head, n);
	return (n);
}
/**
 * add_next_data - Find The next node
 * @node: The current node
 * @sum: The sum of data(n)
 *
 * Return: The sum
 */
int add_next_data(listint_t *node, int sum)
{
	sum += node->n;
	if (node->next != NULL)
	{
		return (add_next_data(node->next, sum));
	}
	return (sum);
}
