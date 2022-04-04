#include "main.h"
#include <stdlib.h>
/**
 * create_array - Create an array of chars populated with specific chars
 * @size: unsigned int the size of the array
 * @c: the char to populate
 *
 * Return: A char pointer to the array
 */
char *create_array(unsigned int size, char c)
{

	char *str;
	unsigned int i;

	if (size > 0)
	{
		i = 0;
		str = malloc((size) * sizeof(c));

		if (str == NULL)
			return (NULL);

		while (i < size)
		{
			*(str + i) = c;
			i++;
		}
		*(str + i) = '\0';
	}
	else
		str = NULL;
	return (str);
}
