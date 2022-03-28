#include "main.h"
/**
 * _memcpy - Copying n bytes form src area to dest
 * @dest: Destination char pointer
 * @src: Source char pointer
 * @n: Numner of byte to copy
 *
 * Return: A char pointer
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(dest + i) = src[i];
	return (dest);
}
