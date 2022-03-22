#include "main.h"
/**
 * _strlen - Find the length of a string
 * @s: Pointer to char
 *
 * Return: char length
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;

	return (len);
}
