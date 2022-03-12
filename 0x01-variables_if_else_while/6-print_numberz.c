#include <stdio.h>

/**
*main - Printing the digits of base 10 only with putchar() function
*
*Return: 0
*/

int main(void)
{
	int i;

	for (i = 0; i < 10 ; i++)
		putchar(i % 10 + '0');
	putchar('\n');

	return (0);
}
