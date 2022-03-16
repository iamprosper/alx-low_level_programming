#include "main.h"
/**
 * print_last_digit - Prints the last digit of a number
 * @nb: int
 *
 * Return: The last digit
 */

int print_last_digit(int nb)
{
	int last;
	if (nb < 0)
	{
		nb = nb * -1;
		last = nb % 10,
		_putchar(last + '0');
		return (last);
	}
	else
	{
		last = nb % 10;
		_putchar('0' + last);
		return (nb);
	}
}
