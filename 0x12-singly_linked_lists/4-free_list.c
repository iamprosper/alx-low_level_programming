#include "lists.h"
/**
 * free_list - Free the memory allocated to create the linked list
 * @head: A pointer to the first of element of the list
 */
void free_list(list_t *head)
{
	free_next_node(head);
}

/**
 * free_next_node - Free nodes starting from the last valid
 * @current_node: The current node
 */
void free_next_node(list_t *current_node)
{
	if (current_node->next != NULL)
	{
		free_next_node(current_node->next);
	}
	if (current_node->str != NULL)
		free(current_node->str);
	if (current_node != NULL)
		free(current_node);
}
