#include "main.h"
/**
 * factorial - Get the factorial of a given number
 * @n: An integer
 *
 * Return: The factorial result
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
