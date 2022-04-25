#include "lists.h"
/**
 * free_listint - Free a listint_t list
 * @head: The head of the list
 */
void free_listint(listint_t *head)
{
	free_last_to_first_node(head);
}
/**
 * free_last_to_first_node - A function that frees a list starting from the last one
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
