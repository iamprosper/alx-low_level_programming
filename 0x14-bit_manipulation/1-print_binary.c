#include "main.h"
/**
 * print_binary - Print the binary representation of a number
 * @n: The decimal number
 */
void print_binary(unsigned long int n)
{
	unsigned long int temp;
	int shifts;

	if (n == 0)
	{
		printf("0");
		return;
	}

	for (temp = n, shifts = 0; (temp >>= 1) > 0; shifts++)
		;

	for (; shifts >= 0; shifts--)
	{
		if ((n >> shifts) & 1)
			_putchar('1');
		else
			_putchar('0');
	}
}

