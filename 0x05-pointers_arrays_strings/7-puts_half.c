#include "main.h"
/**
 * puts_half - Printing the second half of a string
 * @str: Pointer to char
 *
 */
void puts_half(char *str)
{
	int len = 0;
	int offset;
	int i = 0;
	int offset_changing;

	while (str[len] != '\0')
		len++;

	if ((len % 2) == 0)
	{
		offset = (len / 2);
		offset_changing = 0;
	}
	else
	{
		offset = (len - 1) / 2;
		offset_changing = 1;
	}

	while (i < offset)
	{
		_putchar(str[offset + i + offset_changing]);
		i++;
	}
	_putchar('\n');
}
