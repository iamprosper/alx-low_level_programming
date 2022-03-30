#include "main.h"
/**
 * _puts_recursion - Prints a string followed by a  new line
 * @s: A pointer to a char variable
 */
void _puts_recursion(char *s)
{
	_putchar(*(s));
	if (*(s + 1) != '\0')
		_puts_recursion(&(*(s + 1)));
	else
		_putchar('\n');
}
