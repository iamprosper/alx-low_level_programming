#include "main.h"
void print_char(char *s);
int move_next(char *s, int i);
/**
 * _print_rev_recursion - Prints a string in reverse
 * @s: A pointer to a char variable
 */

void _print_rev_recursion(char *s)
{
	int s_len = 0;

	s_len = move_next(s, s_len);
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

/**
 * move_next - Move to the next char
 * @s: A pointer to char
 * @i: An integer
 *
 * Return: an integer acting like index
 */
int move_next(char *s, int i)
{
	if (*(s + 0) != '\0')
	{
		i++;
		return (move_next(&(*(s + 1)), i));
	}
	return (i);
}
