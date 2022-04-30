#ifndef MAIN_H
#define MAIN_H
#include <stdlib.h>
/**
 * struct listint_s - A structure that define binary values
 * @n: The binary value
 * @next: The next node
 */
typedef struct listint_s
{
	unsigned int n;
	struct listint_s *next;
} listint_t;
int _putchar(char c);
unsigned int binary_to_uint(const char *b);
unsigned int binary_to_decimal(listint_t *node,
		unsigned int result, int count, int exp);
void print_binary(unsigned long int n);
int get_bit(unsigned long int n, unsigned int index);
int set_bit(unsigned long int *n, unsigned int index);
int clear_bit(unsigned long int *n, unsigned int index);
unsigned int flip_bits(unsigned long int n, unsigned long int m);
listint_t *add_nodeint(listint_t **head, const int n);
void free_listint(listint_t *head);
void free_last_to_first_node(listint_t *current_node);
size_t print_listint(const listint_t *h);
size_t find_next_node(const listint_t *node, size_t number);
#endif
