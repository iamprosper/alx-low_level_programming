#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/**
 * prime_factor - A program that find the largest prime factor of a number
 * @n: pointer to int, the number
 *
 * Return: Nothing
 */
long prime_factor(long n)
{
	int divisors[] = {2, 3, 5};
	long i, j, prime = 0;

	for (i = 0; i < 3; i++)
	{
		if (n % divisors[i] == 0)
		{
			n = n / divisors[i];
			prime_factor(n);
		}
		else
		{
			for (j = 11; j < (n / 2) ; j = j + 2)
			{
				if (n % j == 0)
				{
					if (prime < j)
						prime = j;
					/*printf("Founded: %ld with j = %ld\n", *n, j);*/
					n = n / j;
					j = 11;
				}
			}
		}
	}
	if (prime < j)
		prime = n;
	return (prime);
}

/**
 * main - test program
 *
 * Return: Always 0
 */
int main(void)
{
	long n = 612852475143;
	long prime = prime_factor(n);

	printf("%ld\n", prime);
	return (0);
}
