#include <stdio.h>
#include <stdlib.h>

/* More headers goes here */

/**
*main - Printing alphabet lower and reversed
*
*Return: 0
*/

int main(void)
{
	char s = 'z';
	int i;

	for (i = 25; i >= 0; i--)
	{
		putchar(s);
		s--;
	}
	putchar('\n');

	return (0);
}
