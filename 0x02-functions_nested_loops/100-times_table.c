#include "main.h"
#include <stdio.h>

/**
 * format_space - Print clearly the number
 * @n: integer, the number
 * @j: integer, column counter
 * @mul: The result of the operation
 *
 * Return: Nothing
 */
void format_space(int n, int j, int mul)
{
	if (mul >= 1 && mul <= 9)
		printf("   %d", mul);
	else if (mul <= 99)
		printf("  %d", mul);
	else
		printf(" %d", mul);
	if (j != n)
		printf(",");
	else
		printf("\n");

}

/**
 * print_times_table - This function prints the time table of a number
 * @n: integer, The number from which we should print the prime table
 * Return: Nothing
 */
void print_times_table(int n)
{
	int i, j;
	int mul;

	if (n >= 0 && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				if (i == 0)
				{
					printf("0");
					if (j < n)
						printf(",   ");
					else if (j == n)
						printf("\n");
				}
				else
				{
					if (j == 0)
						printf("0,");
					else
					{
						mul = i * j;
						format_space(n, j, mul);
					}

				}
			}
		}
	}
}
