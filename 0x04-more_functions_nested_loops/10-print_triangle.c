#include "main.h"

/**
 * print_triangle - A function that print a triangle with #
 * @size: int - the size of the triangle
 *
 * Return: Always 0.
 */
void print_triangle(int size)
{
	int i, j, c;

	for (i = 1; i <= size; i++)
	{
		for (j = 1; j <= (size - i); j++)
		{
			_putchar(' ');
		}
		for (c = 0; c < i; c++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	if (size <= 0)
	{
		_putchar('\n');
	}
}
