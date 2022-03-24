#include "main.h"
/**
 * _strcmp - Compare 2 strings
 * @s1: Pointer to char
 * @s2: Pointer to char
 *
 * Return: -1, 0 or 1 if s1 is less, equal or greater than s2
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);

	return (0);
}
