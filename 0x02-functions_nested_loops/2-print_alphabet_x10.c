#include "main.h"
/**
 * print_alphabet_x10 - Print characters from a to z in low case ten times
 */

void print_alphabet_x10(void)
{
	int i;
	char ch = 'a';

	for (i = 0; i < 10; i ++)
	{
		while (ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}
		ch = 'a';
		_putchar('\n');
	}
}
