#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * str_concat - Concatenate two strings
 * @s1: A char pointer
 * @s2: A char pointer
 *
 * Return: A pointer to char
 */
char *str_concat(char *s1, char *s2)
{
	char *concat;
	int s1_size;
	int s2_size;
	int concat_size;
	int i = 0;
	int j;

	if (s1 == NULL || s2 == NULL)
		return (NULL);

	for (s1_size = 0; *(s1 + s1_size) != '\0'; s1_size++)
	{}

	for (s2_size = 0; *(s2 + s2_size) != '\0'; s2_size++)
	{}

	concat_size = s1_size + s2_size;
	concat = malloc(sizeof(char) * concat_size);

	for (i = 0; s1[i] != '\0'; i++)
		concat[i] = s1[i];

	for (j = 0; s2[j] != '\0'; j++)
		concat[i + j] = s2[j];

	concat[i + j] = '\0';

	return (concat);
}
