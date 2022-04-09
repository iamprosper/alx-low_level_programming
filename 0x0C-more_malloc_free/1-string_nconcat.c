#include "main.h"
#include <stdlib.h>
unsigned int len_str(char *s);
/**
 * string_nconcat - Concatenate two strings
 * @s1: A pointer to char
 * @s2: A pointer to char
 * @n: An unsigned int the n bytes of s2
 *
 * Return: A char pointer to the new string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int new_str_len = 0;
	unsigned int src_len = 0;
	unsigned int dest_len = 0;
	unsigned int i = 0;
	unsigned int j = 0;
	char *new_str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	if (n > len_str(s2))
		src_len = len_str(s2);
	else if (n < len_str(s2))
		src_len = n;

	dest_len = len_str(s1);
	new_str_len = dest_len + src_len;
	new_str = (char *) malloc(sizeof(char) * (new_str_len + 1));

	if (new_str == NULL)
		return (NULL);

	for (i = 0, j = 0; i < new_str_len; i++)
	{
		if (i < dest_len)
			new_str[i] = s1[i];
		else
			new_str[i] = s2[j++];
	}

	new_str[i] = '\0';

	return (new_str);
}

/**
 * len_str - Get the length of the string
 * @s: A pointer to char
 *
 * Return: The length of the string
 */
unsigned int len_str(char *s)
{
	unsigned int i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}
