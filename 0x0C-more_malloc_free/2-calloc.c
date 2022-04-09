#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _calloc - Allocates memory for an array with specific data type
 * @nmemb: An unsigned int the number of element int the array
 * @size: unsigned int, the size of the memory
 *
 * Return: A pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *mem;
	int a = (int) nmemb;
	int b = (int) size;

	if (a <= 0 || b <= 0)
		return (NULL);

	mem = malloc(sizeof(size) * nmemb);
	if (mem == NULL)
		return (NULL);
	return (mem);
}
