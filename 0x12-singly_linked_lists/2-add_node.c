#include "lists.h"
/**
 * add_node - Add a new node at the beguining of a linked list
 * @head: A double pointer to the head
 * @str: The string value of the new node
 *
 * Return: The address of the new element or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node = NULL;

	new_node = malloc(sizeof(list_t));

	if (new_node != NULL)
	{
		if (str != NULL)
		{
			new_node->str = strdup(str);
			new_node->next = *head;
			new_node->len = str_len(str);
			*head = new_node;
		}
	}

	return (new_node);
}

/**
 * str_len - Get the length of a string
 * @str: The string
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
