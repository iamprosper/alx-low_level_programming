#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - Allocate memory
 * @b: Unsigned int, The memory to allocate
 *
 * Return: A pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *mem = malloc(b);

	if (mem != NULL)
		return (mem);
	exit(98);
}
