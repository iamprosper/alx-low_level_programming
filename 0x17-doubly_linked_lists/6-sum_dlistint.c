#include "lists.h"
/**
 * sum_dlistint - Sum all the node values
 * @head: The head of the list
 *
 * Return: The sum or 0 if it is empty
 */
int sum_dlistint(dlistint_t *head)
{
	int result = 0;
	dlistint_t *node = head;

	while (node != NULL)
	{
		result += node->n;
		node = node->next;
	}
	return (result);
}
