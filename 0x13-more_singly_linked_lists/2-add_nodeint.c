#include "lists.h"
/**
 * add_nodeint - Add new node at the beginning of a listint_t
 * @head: A double pointer to the head of the list
 * @n: The number value of the new node
 *
 * Return: the address of the new element or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new = NULL;

	new = malloc(sizeof(listint_t));
	if (new != NULL)
	{
		new->n = n;
		new->next = *head;
		*head = new;
	}

	return (new);
}
