#include "main.h"
int _recursion(char *s, int i);
/**
 * _strlen_recursion - Get the lenght of a string
 * @s: A pointer to char
 *
 * Return: An integer, the lenght of the string
 */
int _strlen_recursion(char *s)
{
	int i = 0;

	return (_recursion(s, i));
}

/**
 * _recursion - Move to the next character
 * @s: A char pointer
 * @i: An integer
 *
 * Return: An integer, the lenght of the string
 */
int _recursion(char *s, int i)
{
	if (*s != '\0')
	{
		i++;
		return (_recursion(&(*(s + 1)), i));
	}
	return (i);
}
