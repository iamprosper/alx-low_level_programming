#include "main.h"
/**
 * binary_to_uint - Convert a binary number to unsigned int
 * @b: A pointer to a char constant
 *
 * Return: The conversion in ui
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int nb = 0;
	int position = 0;
	int exp = 0;
	listint_t *head = NULL;

	if (b == NULL)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
		{
			free_listint(head);
			return (0);
		}
		add_nodeint(&head, b[i] - '0');
	}
	if (i == 0)
		return (0);
	if (i == 1)
	{
		free_listint(head);
		if (b[i - 1] == 0)
			return (0);
		else
			return (1);
	}
	nb = binary_to_decimal(head, nb, position, exp);
	free_listint(head);

	return (nb);
}
/**
 * binary_to_decimal - Convert binary to decimal
 * @node: The current node
 * @result: The result
 * @count: A position of each elements
 * @exp: The calcul of 2 raised to the power of count
 *
 * Return: The decimal correspondance
 */
unsigned int binary_to_decimal(listint_t *node,
		unsigned int result, int count, int exp)
{
	if (node != NULL)
	{
		if (count == 0)
			exp = 1;
		else if (count == 1)
			exp = 2;
		else
			exp = exp * 2;
		result += exp * node->n;

		return (binary_to_decimal(node->next, result, ++count, exp));
	}
	return (result);
}
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
/**
 * free_listint - Free a listint_t list
 * @head: The head of the list
 */
void free_listint(listint_t *head)
{
	free_last_to_first_node(head);
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
