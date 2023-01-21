#include "main.h"
#include <stdio.h>
/**
 * fibo - Print 50 fibonacci numbers starting 1 and 2
 * @n: integer, the total numbers
 *
 * Return: fb_number
 */
long int fibo(int n)
{
	if (n == 2)
		return (1);
	else if (n == 3)
		return (2);
	return (fibo(n - 1) + fibo(n - 2));
}

/**
 * main - Check the code
 *
 * Return: Always 0
 */
int main(void)
{
	long int prev = 1, next = 2;
	long int temp;
	int n = 50;
	int i;

	printf("%lu, ", prev);

	for (i = 2; i <= n; i++)
	{
		if (i == n)
			printf("%ld\n", next);
		else
			printf("%ld, ", next);

		temp = next;
		next += prev;
		prev = temp;
	}
	return (0);
}
