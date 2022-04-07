#include "main.h"
#include <stdlib.h>
int len_s(char *s);
/**
 * strtow - Split a string into words
 * @str: A pointer to char
 *
 * Return: A 2D char array
 */
char **strtow(char *str)
{
	char **strings;
	int len_str;
	int i = 0;
	int j = 0;
	int find = 0;

	len_str = len_s(str);

	if ((len_str == 1 && *str == 32) || *str == '\0' || str == NULL)
		return (NULL);

	while (str[i] == 32)
		i++;
	if (i == len_str)
		return (NULL);
	i = 0
	len_str = 0;

	while (str[i] != '\0')
	{
		if (str[i] != 32)
			if (str[i + 1] == 32 || str[i + 1] == '\0')
				find++;
		i++;
	}


	strings = (char **) malloc((sizeof(char *) * find) + 1);

	if (strings == NULL)
		return (NULL);
	i = 0;
	find = 0;

	while (str[i] != '\0')
	{
		if (str[i] != 32)
			len_str++;
		if ((str[i] != 32 && str[i + 1] == 32)
				|| (str[i] != 32 && str[i + 1] == '\0'))
		{
			*(strings + find) = (char *) malloc(sizeof(char) * len_str);

			if (*(strings + find) == NULL)
			{
				while (--find >= 0)
					free(strings[find]);
				free(strings);
				return (NULL);
			}
			find += 1;
			len_str = 0;
		}
		i++;

	}

	i = 0;
	find = 0;

	while (str[i] != '\0')
	{
		if (str[i] != 32)
		{
			strings[find][j] = str[i];
			j++;
			if (str[i + 1] == 32 || str[i + 1] == '\0')
			{
				strings[find][j] = '\0';
				j = 0;
				find++;
			}
		}
		i++;
	}
	strings[find + 1] = '\0';
	return (strings);

}
/**
 * len_s - Get the length of a string
 * @s: A pointer to char
 *
 * Return: The length of the string
 */
int len_s(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}
