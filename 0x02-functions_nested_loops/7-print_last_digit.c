#include "main.h"
/**
 * print_last_digit - Prints the last digit of a number
 * @nb: int
 *
 * Return: The last digit
 */

int print_last_digit(int nb)
{
	if (nb < 0)
	{
		nb = nb * -1;
		nb = nb % 10,
		_putchar(nb + '0');
		return (nb);
	}
	else
	{
		nb = nb % 10;
		_putchar('0' + nb);
		return (nb);
	}
}
