#include <stdio.h>
#include "main.h"

/**
 * print_1_type - print a digit from 0 to 9
 * @n: The digit to print
 *
 * Return: Nothing
 */
void print_1_type(int n)
{
	_putchar(n + '0');
}

/**
 * print_10_type - print a digit from 10 to 99
 * @n: The digit to print
 *
 * Return: Nothing
 */
void print_10_type(int n)
{
	print_1_type(n / 10);
	print_1_type(n % 10);
}

/**
 * print_100_type - print a digit from 100 to 999
 * @n: The digit to print
 *
 * Return: Nothing
 */
void print_100_type(int n)
{
	print_10_type(n / 10);
	print_1_type(n % 10);
}

/**
 * print_1000_type - print a digit from 1000 to 9999
 * @n: The digit to print
 *
 * Return: Nothing
 */
void print_1000_type(int n)
{
	print_100_type(n / 10);
	print_1_type(n % 10);
}

/**
 * print_number - This method is used to print a number with putchar
 * @n: An integer, the number to print
 *
 * Return: Nothing
 */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = n * -1;
	}
	if (n >= 0 && n <= 9)
	{
		print_1_type(n);
	}
	else if (n >= 10 && n <= 99)
	{
		print_10_type(n);
	}
	else if (n >= 100 && n <= 999)
	{
		print_100_type(n);
	}
	else if (n >= 1000 && n <= 9999)
	{
		print_1000_type(n);
	}
}
