#include "main.h"

/**
 * print_square - print a square with # character
 * @size: int, the size of the square to print
 *
 * Return: Always 0
 */

void print_square(int size)
{
	int i, j;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
