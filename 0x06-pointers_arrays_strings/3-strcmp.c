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
	int s1_len = 0;
	int s2_len = 0;

	while (s1[s1_len] != '\0')
		s1_len++;

	while (s2[s2_len] != '\0')
		s2_len++;

	if (s1_len < s2_len)
		return (-1);
	else if (s1_len > s2_len)
		return (1);

	return (0);
}
