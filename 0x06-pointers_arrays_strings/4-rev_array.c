#include "main.h"
/**
 * reverse_array - Reverse the content of an array of integers
 * @a: Pointer to the array
 * @n: int
 */
void reverse_array(int *a, int n)
{
	int i;
	int perm;

	for (i = 0; i < n / 2; i++)
	{
		perm = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = perm;
	}
}
