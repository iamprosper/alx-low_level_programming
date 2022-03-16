#include "main.h"
/**
 * print_sign - Print the sign of a number
 * @n: int
 *
 * Return: 1 -positive, -1 -negative, 0 - zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}

