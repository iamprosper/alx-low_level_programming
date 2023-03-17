#include "lists.h"
/**
 * add_dnodeint_end - Add a node at the end of a dlinked list
 * @head: The head of the double linked list
 * @n: The value of the node
 *
 * Return: The address of the new element
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));
	dlistint_t *original_head = *head;

	if (new == NULL)
		return (NULL);
	new->next = NULL;
	new->n = n;

	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
		return (new);
	}
	while ((*head)->next != NULL)
		*head = (*head)->next;
	(*head)->next = new;
	new->prev = *head;
	*head = original_head;

	return (new);
}


