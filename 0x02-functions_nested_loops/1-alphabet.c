#include "main.h"
/**
 * print_alphabet - Used to display characters from a to z in low case
 */
void print_alphabet(void)
{
	char ch = 'a';
	int i;

	for (i = 0; i < 26; i++)
	{
		_putchar(ch);
		ch++;
	}
	_putchar('\n');
}
