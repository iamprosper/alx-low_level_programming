#include "main.h"
#include <stdio.h>
/**
 * fibo - Print 50 fibonacci numbers starting 1 and 2
 * @n: integer, the total numbers
 *
 * Return: fb_number
 */
long long fibo(int n)
{
	if (n == 1 || n == 2)
		return (1);
	return (fibo(n - 1) + fibo(n - 2));
}

/**
 * main - Check the code
 *
 * Return: Always 0
 */
int main(void)
{
	int i;
	int n = 50;

	for (i = 1; i <= n; i++)
	{
		if (i == n)
			printf("%lld\n", fibo(i));
		else
			printf("%lld, ", fibo(i));
	}
	return (0);
}
