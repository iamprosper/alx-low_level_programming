#include "function_pointers.h"
/**
 * int_index - A function that searches for an integer
 * @array: A pointer to array
 * @size: The number of elements in the array
 * @cmp: The comparison
 *
 * Return: The integer founded
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size <= 0)
		return (-1);

	while (i < size)
	{
		if (cmp(array[i]) != 0)
			return (i);
		i++;
	}
	return (-1);
}
