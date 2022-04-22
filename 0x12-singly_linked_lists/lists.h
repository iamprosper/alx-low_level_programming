#ifndef LIST_H
#define LIST_H
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;
int _putchar(char c);
size_t print_list(const list_t *h);
size_t print_node(const list_t *h, size_t n);
size_t list_len(const list_t *h);
size_t check_next(const list_t *h, size_t n);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);
size_t str_len(const char *str);
list_t *next_node(list_t *current_node);
void free_next_node(list_t *current_node);
#endif
