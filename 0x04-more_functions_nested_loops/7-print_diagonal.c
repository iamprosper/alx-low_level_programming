#include "main.h"
/**
 * print_diagonal - Print \ n times
 * @n: int
 */
void print_diagonal(int n)
{
	int i = 0;
	int j = 0;

	if (n > 0)
	{
		while (i < n)
		{
			for (j = 0; j < i; j++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
			i++;
		}
	}
	else
	{
		_putchar('\n');
	}
}
