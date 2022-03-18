#include "main.h"
/**
 * print_to_98 - Prints normal digits from input number to 98
 * @n: int
 */

/**
 * print_1_nb - Print the last digit of a number
 * @n: int
 */

/**
 * print_10_nb - Print nb form 10 to 99
 * @n: int
 */

/**
 * print_x_nb - Print any number
 * @n: int
 */

void print_1_nb(int n);
void print_10_nb(int n);
void print_100_nb(int n);
void print_x_nb(int n);

void print_to_98(int n)
{
	int i;

	if (n < 98)
	{
		for(i = n; i <= 98; i++)
		{
			int compute_nb;

			if (i <= 9 && i >= 0)
			{
				if(i == n)
				{
					print_1_nb(i);
					_putchar(',');
				}
				else
				{
					_putchar(' ');
					print_1_nb(i);
					_putchar(',');
				}
			}
			else if (i == n)
			{
				if (i < 0)
				{
					compute_nb = i * -1;
					_putchar('-');
					if (compute_nb >= 100)
						print_100_nb(compute_nb);
					else
					{
						if (compute_nb >= 10)
							print_10_nb(compute_nb);
						else
							print_1_nb(compute_nb);
					}
				}
				else
					print_10_nb(i);
				_putchar(',');
			}
			else if (i != 98)
			{
				_putchar(' ');
				if (i < 0)
				{
					compute_nb = i * -1;
					_putchar('-');
					if (i <= -100)
						print_100_nb(compute_nb);
					else
					{
						if (compute_nb >= 10)
							print_10_nb(compute_nb);
						else
							print_1_nb(compute_nb);
					}
				}
				else
					print_10_nb(i);
				_putchar(',');
			}
			else
			{
				_putchar(' ');
				print_10_nb(i);
				_putchar('\n');
			}
		}
	}
	else if (n > 98)
	{
		for (i = n; i >= 98; i--)
		{
			if (i >= 100)
			{
				if (i == n)
				{
					print_100_nb(i);
					_putchar(',');
				}
				else
				{
					_putchar(' ');
					print_100_nb(i);
					_putchar(',');
				}
			}
			else
			{
				_putchar(' ');
				print_10_nb(i);
				if (i != 98)
					_putchar(',');
				else
					_putchar('\n');
			}
		}
	}
	else
	{
		print_10_nb(n);
		_putchar('\n');
	}
}

void print_x_nb(int x)
{
	_putchar(x + '0');
}


void print_100_nb(int n)
{
	int nb;
	nb = n % 100;
	_putchar(n / 100 + '0');
	print_10_nb(nb);
}

void print_10_nb(int n)
{
	_putchar(n / 10 + '0');
	print_1_nb(n);
}

void print_1_nb(int n)
{
	_putchar(n % 10 + '0');
}
