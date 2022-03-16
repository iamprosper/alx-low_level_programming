#include "main.h"
/**
 * _isalpha - Print wheter or not a character is alpha
 * @c: int
 *
 * Return: 1 in case of succes, and 0 in case of failure
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	return (0);
}
