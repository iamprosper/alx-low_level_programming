#include "main.h"
#include <stdio.h>

/**
 * natural_nb - Check number that are multiples of 3 and 5 and below 1024
 * @n: The number, an integer
 *
 * Return: Nothing
 */
void natural_nb(int n)
{
	int divisors[] = {3, 5};
	int i, j, sum = 0;

	for (i = 3; i < n; i++)
	{
		for (j = 0; j < 2; j++)
		{
			if (i % divisors[j] == 0)
				sum += i;
		}
	}
	printf("Sum: %d\n", sum);
}

/**
 * main - Check the code
 *
 * Return: Nothing
 */
int main(void)
{
	natural_nb(1024);
	return (0);
}
