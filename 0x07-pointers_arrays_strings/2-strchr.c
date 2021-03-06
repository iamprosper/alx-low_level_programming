#include "main.h"
/**
 * _strchr - Locate a character in a string
 * @s: A char pointer source of the string
 * @c: A char to search
 *
 * Return: A char pointer
 */
char *_strchr(char *s, char c)
{
	int i = 0;
	char *result = 0;

	if (c == '\0')
	{
		while (s[i] != '\0')
			i++;
		return (&(*(s + i)));
	}
	else
	{

		while (s[i] != '\0')
		{
			if (s[i] == c)
			{
				result = &s[i];
				break;
			}
			i++;
		}
	}
	return (result);
}
