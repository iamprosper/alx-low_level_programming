#include "main.h"
/**
 * print_line - Print n times
 * @c: int
 */
void print_line(int c)
{
	int i = 0;

	while (i < c && c > 0)
	{
		_putchar('_');
		i++;
	}
	_putchar('\n');
}
