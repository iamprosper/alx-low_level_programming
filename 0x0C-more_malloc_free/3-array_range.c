#include "main.h"
#include <stdlib.h>
/**
 * array_range - Create an array of integers
 * @min: The min integer
 * @max: The max integer value
 *
 * Return: A pointer to the new array of integer
 */
int *array_range(int min, int max)
{
	int *int_array;
	int array_size;
	int i = 0;

	if (min > max || min == max)
		return (NULL);
	array_size = (max - min) + 1;
	int_array = (int *) malloc(sizeof(int) * array_size);
	if (int_array == NULL)
		return (NULL);

	for (i = min; i <= max; i++)
		*(int_array + i) = i;
	return (int_array);
}
