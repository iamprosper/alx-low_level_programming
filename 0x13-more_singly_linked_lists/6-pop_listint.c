#include "lists.h"
/**
 * pop_listint - Delete the head node of a listintèt
 * @head: The head of the list
 *
 * Return: The head nodes's data(n)
 */
int pop_listint(listint_t **head)
{
	int n = 0;
	listint_t *node;

	if (*head != NULL)
	{
		node = *head;
		n = node->n;
		*head = node->next;
		free(node);
	}
	return (n);
}
