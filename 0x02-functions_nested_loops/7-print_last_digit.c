#include "main.h"
/**
 * print_last_digit - Prints the last digit of a number
 * @nb: int
 *
 * Return: The last digit
 */

int print_last_digit(int nb)
{
	int last =  nb % 10;
	if (nb < 0)
	{
		last = last * -1;
		_putchar(last + '0');
		return (last * -1);
	}
	else
	{
		_putchar('0' + last);
		return (last);
	}
}
