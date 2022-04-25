#include "lists.h"
/**
 * add_nodeint_end - Add a new node to the end of the list
 * @head: A double pointer to the head of the list
 * @n: The n value of the new pointer
 *
 * Return: The address of the new element or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new = NULL;
	listint_t *last_node = NULL;

	new = malloc(sizeof(listint_t));
	last_node = malloc(sizeof(listint_t));
	if (new != NULL && last_node != NULL)
	{
		new->n = n;
		if (*head == NULL)
		{
			new->next = *head;
			*head = new;
		}
		else
		{
			last_node = find_last_node(*head);
			last_node->next = new;
		}
	}
	return (new);

}
/**
 * find_last_node - Find the last node
 * @current_node: A pointer to the current node
 *
 * Return: A pointer to the last node
 */
listint_t *find_last_node(listint_t *current_node)
{
	if (current_node->next != NULL)
		return (find_last_node(current_node->next));
	return (current_node);
}
