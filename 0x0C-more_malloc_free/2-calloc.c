#include "main.h"
#include <stdlib.h>
/**
 * _calloc - Allocates memory for an array
 * @nmemb: An unsigned int the number of element int the array
 * @size: unsigned int, the size of the memory
 *
 * Return: A pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *mem;

	if (nmemb == 0 || size == 0)
		return (NULL);
	mem = malloc(sizeof(size) * nmemb);
	if (mem == NULL)
		return (NULL);
	return (mem);
}
