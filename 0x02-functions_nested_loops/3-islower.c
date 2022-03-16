#include "main.h"
/**
 * _islower - Print wheter or not a char is in lower case
 * @c: int
 *
 * Return: 1 in case of success or 0
 */

int _islower(int c)
{
	if (c >= 97 && c < 123)
		return (1);
	return (0);
}
