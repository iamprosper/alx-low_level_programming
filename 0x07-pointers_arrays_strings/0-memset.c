#include "main.h"

/**
* _memset - Fill memory with a constante byte
* @s: A pointer to a char
* @b: A char
* @n: An integer
*
* Return: A pointer to a char
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(s + i) = b;
	return (s);
}
