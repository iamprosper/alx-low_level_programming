#include "main.h"
/**
 * string_toupper - Change all lowercase letters of a string to uppercase
 * @c: Pointer to char
 *
 * Return: A pointer to char
 */
char *string_toupper(char *c)
{
	int i;

	for (i = 0; c[i] != '\0'; i++)
		if (c[i] >= 97 && c[i] <= 122)
			c[i] = c[i] - 32;
	return (c);
}
