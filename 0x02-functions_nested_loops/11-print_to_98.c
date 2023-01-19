#include "main.h"

/**
 * print_nb - Print the number
 * @n: int, tht number
 * @base: The base (whether the number is divided by 100, 10
 */
void print_nb(int n, int base)
{
	int nb;

	switch (base)
	{
		case 10:
			_putchar(n / 10 + '0');
			print_nb(n, 1);
			break;
		case 100:
			nb = n % 100;
			_putchar(n / 100 + '0');
			print_nb(nb, 10);
			break;
		default:
			_putchar(n % 10 + '0');
	}


}

/**
 * print_from_range - Printing the number according to its range
 * @range: integer, The range of the number
 * @n: the number, integer
 * @i: integer, the counter
 * @compute_nb: sign of the number
 */
void print_from_range(int range, int n, int i, int compute_nb)
{
	if (range == 1)
	{
		if (i == n)
		{
			print_nb(i, 1);
			_putchar(',');
		}
		else
		{
			_putchar(' ');
			print_nb(i, 1);
			_putchar(',');
		}
	}
	else if (range == 2)
	{
		if (i < 0)
		{
			compute_nb = i * -1;
			_putchar('-');
			if (compute_nb >= 100)
				print_nb(compute_nb, 100);
			else
			{
				if (compute_nb >= 10)
					print_nb(compute_nb, 10);
				else
					print_nb(compute_nb, 1);
			}
		}
		else
			print_nb(i, 10);
		_putchar(',');
	}
}

/**
 * print_less_98 - This function print all numbers < 98
 * @n: The number, an integer
 * @i: integer, a counter
 */
void print_less_98(int n, int i)
{
	for (i = n; i <= 98; i++)
	{
		int compute_nb = 0;

		if (i <= 9 && i >= 0)
		{
			print_from_range(1, n, i, compute_nb);
		}
		else if (i == n)
		{
			print_from_range(2, n, i, compute_nb);
		}
		else if (i != 98)
		{
			_putchar(' ');
			if (i < 0)
			{
				compute_nb = i * -1;
				_putchar('-');
				if (i <= -100)
					print_nb(compute_nb, 100);
				else
				{
					if (compute_nb >= 10)
						print_nb(compute_nb, 10);
					else
						print_nb(compute_nb, 1);
				}
			}
			else
				print_nb(i, 10);
			_putchar(',');
		}
		else
		{
			_putchar(' ');
			print_nb(i, 10);
			_putchar('\n');
		}
	}
}

/**
 * print_to_98 - Prints normal digits from input number to 98
 * @n: int
 */
void print_to_98(int n)
{
	int i = 0;

	if (n < 98)
	{
		print_less_98(n, i);
	}
	else if (n > 98)
	{
		for (i = n; i >= 98; i--)
		{
			if (i >= 100)
			{
				if (i == n)
				{
					print_nb(i, 100);
					_putchar(',');
				}
				else
				{
					_putchar(' ');
					print_nb(i, 100);
					_putchar(',');
				}
			}
			else
			{
				_putchar(' ');
				print_nb(i, 10);
				if (i != 98)
					_putchar(',');
				else
					_putchar('\n');
			}
		}
	}
	else
	{
		print_nb(n, 10);
		_putchar('\n');
	}
}

