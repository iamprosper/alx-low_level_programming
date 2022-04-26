#include "lists.h"
/**
 * delete_nodeint_at_index - Delete a node at a given index of the list
 * @head: A pointer to the head of the list
 * @index: The index where the node will be deleted
 *
 * Return: 1 in case of succes, -1 in case of failure
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *node_to_delete;
	unsigned int n = 0;

	if (*head != NULL)
	{
		if (index == n)
		{
			node_to_delete = *head;
			*head = (*head)->next;
			free(node_to_delete);
			return (1);
		}
		return (check_node_to_delete(*head, index, n));
	}

	return (-1);
}
/**
 * check_node_to_delete - Check the node position
 * @node: The current node
 * @index: The postion of the node
 * @n: The position counter
 *
 * Return: 1 in success, -1 in case of failure
 */
int check_node_to_delete(listint_t *node, unsigned int index, unsigned int n)
{
	listint_t *next_node = node->next;
	listint_t *node_to_delete;

	if (n + 1 == index)
	{
		if (next_node == NULL)
			return (-1);
		node_to_delete = next_node;
		next_node = node_to_delete->next;
		node->next = next_node;
		free(node_to_delete);
		return (1);
	}

	return (node->next == NULL ?
			-1 : check_node_to_delete(node->next, index, ++n));
}
