#include <stdio.h>
#include "main.h"
#include <limits.h>
#include <stdbool.h>

/*
* print_1_type - print a digit from 0 to 9
* @n: The digit to print
*
* Return: Nothing
*
*void print_1_type(int n)
*{
*	_putchar(n + '0');
*}
*void print_10_type(int n)
*{
*	print_1_type(n / 10);
*	print_1_type(n % 10);
*}
* print_100_type - print a digit from 100 to 999
* @n: The digit to print
*
* Return: Nothing
*
*void print_100_type(int n)
*{
*	print_10_type(n / 10);
*	print_1_type(n % 10);
*}
*/

/**
 * print_all_type - print all digit number
 * @n: The digit to print
 * @min: Check if a min int is present
 *
 * Return: Nothing
 */
void print_all_type(int n, bool min)
{
	int r = n / 10;

	if (r >= 1)
	{
		print_all_type(n / 10, 0);
		if (min == 0)
			_putchar(n % 10 + '0');
		else
			_putchar(((n % 10) + 1) + '0');
	}
	else
		_putchar(n + '0');
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
		if (n != INT_MIN)
			n = -n;
		else
			n = (n + 1) * -1;
	}
	/*
	*if (n >= 0 && n <= 9)
	*{
	*	print_1_type(n);
	*}
	*else if (n >= 10 && n <= 99)
	*{
	*	print_10_type(n);
	*}
	*else if (n >= 100 && n <= 999)
	*{
	*	print_100_type(n);
	*}
	*else if (n >= 1000 && n <= 9999)
	*{
	*	print_1000_type(n);
	*}
	*/
	if ((n + 1 - INT_MIN) != 0)
		print_all_type(n, 0);
	else

		print_all_type(n, 1);
}
