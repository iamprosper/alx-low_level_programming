#include "variadic_functions.h"
/**
 * sum_them_all - A function that prints the parameter received
 * @n: The number of element to add
 *
 * Return: An integer, the sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list va;
	unsigned int i, sum;

	if (n == 0)
		return (0);

	va_start(va, n);
	sum = 0;

	for (i = 0; i < n; i++)
		sum += va_arg(va, const unsigned int);

	va_end(va);

	return (sum);
}
