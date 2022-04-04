#include "main.h"
#include <stdlib.h>
/**
 * _strdup - Copy a string
 * @str: A pointer to char
 *
 * Return: A char pointer to the copy of the string
 */
char *_strdup(char *str)
{
	char *copy;
	int size = 0;
	int i = 0;

	if (str == NULL)
		return (NULL);
	while (*(str + size) != '\0')
		size++;
	copy = malloc(sizeof(char) * size);
	while (i < size)
	{
		*(copy + i) = *(str + i);
		i++;
	}
	return (copy);
}
