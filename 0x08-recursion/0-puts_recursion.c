#include "main.h"
/**
 * _puts_recursion - Prints a string followed by a  new line
 * @s: A pointer to a char variable
 */
void _puts_recursion(char *s)
{
	if(*(s + 0) != '\0')
	{
		_putchar(*(s));
		_puts_recursion(&(*(s + 1)));
	}
	else
		_putchar('\n');

}
