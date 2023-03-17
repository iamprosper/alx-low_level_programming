#include "lists.h"
/**
 * add_dnodeint - Add a new node to the head of the dlist
 * @head: The head of the dlist
 * @n: The value of the node
 *
 * Return: The address of the new element or NULL
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);

	new->next = *head;
	new->prev = NULL;
	new->n = n;

	if (*head != NULL)
		(*head)->prev = new;

	*head = new;

	return (*head);
}
