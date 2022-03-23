#include "main.h"
#include <stdio.h>
/**
 * print_array - Printing n elements of an array of integers
 * @a: Pointer to in
 * @n: int
 *
 */
void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		if ((i + 1) < n)
			printf("%d, ", a[i]);
		else
			printf("%d\n", a[i]);
		i++;
	}
}
