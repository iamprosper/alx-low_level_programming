#include "main.h"
/**
 * swap_int - Update the values of two integers
 * @a: Pointer to int
 * @b: Pointer to int
 *
 */
void swap_int(int *a, int *b)
{
	int c = *a;

	*a = *b;
	*b = c;
}
