#include "lists.h"
/**
 * free_dlistint - Free a dlinked list
 * @head: The head of the double linked list
 *
 * Return: Nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;
	dlistint_t *current = head;

	while (current != NULL)
	{
		temp = current;
		current = current->next;
		free(temp);
	}
}
