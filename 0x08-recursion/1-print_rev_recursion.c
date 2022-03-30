#include "main.h"
void print_char(char *s);
/**
 * _print_rev_recursion - Prints a string in reverse
 * @s: A pointer to a char variable
 */

void _print_rev_recursion(char *s)
{
	int s_len = 0;
	int i;

	for (i = 0; s[i] != '\0'; i++)
		s_len++;

	print_char(&(*(s + s_len - 1)));
}

/**
 * print_char - The effective function
 * @s: Pointer to a char variable
 */
void print_char(char *s)
{
	if (*(s + 0) != '\0')
	{
		_putchar(*(s + 0));
		print_char(&(*(s - 1)));
	}
}
