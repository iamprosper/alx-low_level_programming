#include "main.h"
#include <stdio.h>
/**
 * _strcat - Concatenate two strings with pointers
 * @dest: Pointer to char
 * @src: Pointer to char
 *
 * Return: A pointer to a char
 */
char *_strcat(char *dest, char *src)
{
	int dest_len = 0;
	int src_len = 0;
	int i;

	while (dest[dest_len] != '\0')
		dest_len++;

	while (src[src_len] != '\0')
		src_len++;

	for (i = 0; i < src_len; i++)
	{
		_putchar(src[i]);
		dest[dest_len + i] = src[i];
	}
	dest[dest_len + i] = '\0';

	return (dest);
}
