#include "main.h"
/**
 * puts2 - Printing even charcters of a string
 * @str: Pointer to char
 *
 */
void puts2(char *str)
{
	int len = 0;
	int i = 0;

	while (str[len] != '\0')
		len++;

	while (i < len)
	{
		if ((i % 2) == 0)
			_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
