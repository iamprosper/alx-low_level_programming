#include "main.h"
/**
 * is_prime_number - Check wether the given number is a prime number
 * @n: The integer number to check
 *
 * Return: The result: 1 in case of success, 0 in case of failure
 */
int is_prime_number(int n)
{
	if ((n < 0) || (n == 1) || (n % 2 == 0) || (n % 3 == 0) || (n % 5 == 0))
		return (0);
	return (1);
}
