#include "main.h"
/**
 * _strncat - Concatenate two strings with pointers with n bytes
 * @dest: Pointer to char, the destination
 * @src: Pointer to char, the source
 * @n: Int, n bytes to copy
 * Return: A pointer to a char
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_len = 0;
	int src_len = 0;
	int i;
	int offset;

	while (dest[dest_len] != '\0')
		dest_len++;

	while (src[src_len] != '\0')
		src_len++;
	if (n < src_len)
		offset = n;
	else
		offset = src_len;

	for (i = 0; i < offset; i++)
		dest[dest_len + i] = src[i];
	dest[dest_len + i] = '\0';

	return (dest);
}
