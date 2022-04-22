#include "lists.h"
/**
 * add_node_end - Ade a node to the end of the linked list
 * @head: The first node
 * @str: The string value of the new node
 *
 * Return: A pointer to the new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node = NULL;

	if (str != NULL)
	{
		new_node = malloc(sizeof(list_t));

		if (new_node != NULL)
		{
			new_node->str = strdup(str);
			if (*head != NULL)
			{
				next_node(*head)->next = new_node;
				new_node->next = NULL;
			}
			else
			{
				new_node->next = *head;
				*head = new_node;
			}
			new_node->len = str_len(str);

		}
	}

	return (new_node);
}

/**
 * next_node - Find the next (last node)
 * @current_node: The current node
 *
 * Return: A pointer to the last node
 */
list_t *next_node(list_t *current_node)
{
	if (current_node->next != NULL)
		return (next_node(current_node->next));
	return (current_node);
}

/**
 * str_len - Get the length of the string
 * @str: The string value of the new node
 *
 * Return: The length
 */
size_t str_len(const char *str)
{
	size_t n = 0;

	while (str[n] != '\0')
		n++;

	return (n);
}
