#include "main.h"
#include <stdlib.h>
#include <stdio.h>
char *populate_concat(char *s, char *concat);
int len_str(char *s);
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

	if (s1 == NULL && s2 != NULL)
	{
		concat = malloc(sizeof(char) * (len_str(s2) + 1));
		if (concat == NULL)
			return (NULL);
		return (populate_concat(s2, concat));
	}
	else if (s2 == NULL && s1 != NULL)
	{
		concat = malloc(sizeof(char) * (len_str(s1) + 1));
		if (concat == NULL)
			return (NULL);
		return (populate_concat(s1, concat));
	}
	else if (s1 == NULL && s2 == NULL)
	{
		concat = malloc(sizeof(char));
		concat[0] = '\0';
		return (concat);
	}

	for (s1_size = 0; *(s1 + s1_size) != '\0'; s1_size++)
	{}

	for (s2_size = 0; *(s2 + s2_size) != '\0'; s2_size++)
	{}

	concat_size = s1_size + s2_size + 1;
	concat = malloc(sizeof(char) * concat_size);

	if (concat == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		concat[i] = s1[i];

	for (j = 0; s2[j] != '\0'; j++)
		concat[i + j] = s2[j];

	concat[i + j] = '\0';

	return (concat);
}
/**
 * populate_concat - Populate a char pointer by string
 * @s: A char pointer representing the string
 * @concat: A char pointer representing the new string
 *
 * Return: A pointer to the new string
 */
char *populate_concat(char *s, char *concat)
{
	int i = 0;

	while (s[i] != '\0')
	{
		concat[i] = s[i];
		i++;
	}
	return (concat);
}
/**
 * len_str - Get the lenght of a string
 * @s: A pointer to the string
 *
 * Return: An integer, the lenght of the string
 */
int len_str(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{}

	return (i);
}
