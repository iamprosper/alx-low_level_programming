#include "lists.h"
/**
 * free_listint2 - Free a linked list and sets the head to NULL
 * @head: A double pointer to the listint_t structure
 */
void free_listint2(listint_t **head)
{
	if (head != NULL)
	{
		free_last_to_first_node(*head);
		*head = NULL;
	}
}
/**
 * free_last_to_first_node - Free a list starting from the last one
 * @current_node: The current node to free
 */
void free_last_to_first_node(listint_t *current_node)
{
	if (current_node != NULL)
	{
		free_last_to_first_node(current_node->next);
		free(current_node);
	}
}
