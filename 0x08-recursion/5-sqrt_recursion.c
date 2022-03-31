#include "main.h"
int _sqrt(int n, int ending, int suggested_root);
/**
 * _sqrt_recursion - Get the square root of a given number
 * @n: An integer
 *
 * Return: an integer, the square root
 */
int _sqrt_recursion(int n)
{
	if (n % 2 == 0)
		return (_sqrt(n, 2, n / 2));
	else if (n % 3 == 0)
		return (_sqrt(n, 3, n / 3));
	else if (n % 5 == 0)
		return (_sqrt(n, 5, n / 5));
	return (-1);
}

/**
 * _sqrt - Effective funcion
 * @n: An integer
 * @ending: An integer
 * @suggested_root: An integer
 *
 * Return: The square root
 */
int _sqrt(int n, int ending, int suggested_root)
{
	if (n < suggested_root * suggested_root)
		return (_sqrt(n, ending, suggested_root / ending));
	return (suggested_root);
}
