#include "main.h"
/**
 * _pow_recursion - Get the result of a value raised to the power of an int
 * @x: The integer number
 * @y: The power
 *
 * Return: The result, an integer
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
