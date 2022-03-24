#include "main.h"
/**
 * _strncpy - Concatenate two strings with pointers with n byte
 * @dest: Pointer to char, the destination
 * @src: Pointer to char, the source
 * @n: Int, n bytes to copy
 * Return: A pointer to a char
 */
char *_strncpy(char *dest, char *src, int n)
{
	int dest_len = 0;
	int i = 0;

	while (dest[dest_len] != '\0')
		dest_len++;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	if (i < n)
		for (i = i; i < n; i++)
			dest[i] = '\0';
	else if (n > dest_len)
		dest[n] = '\0';

	return (dest);
}
