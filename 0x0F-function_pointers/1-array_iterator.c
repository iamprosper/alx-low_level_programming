#include "function_pointers.h"

/**
 * array_iterator - Execute a function on each element of an array
 * @array: The array of int
 * @size: The size of the array
 * @action: The function pointer
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (array != NULL &&  size > 0 && action != NULL)
	{
		while (i < size)
		{
			action(array[i]);
			i++;
		}
	}
}
