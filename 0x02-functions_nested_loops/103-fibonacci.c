#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0
 */
int main(void)
{
	long int prev = 1, next = 2;
	long int temp, sum = 0, limit = 4000000;

	/*printf("%ld ,", prev);*/
	while (next < limit)
	{
		if (next % 2 == 0)
		{
			sum += next;
		}

		temp = next;
		next += prev;
		prev = temp;
	}
	printf("%ld\n", sum);
	return (0);
}
