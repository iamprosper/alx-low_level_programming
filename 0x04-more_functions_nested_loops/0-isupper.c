#include "main.h"
/**
 * _isupper - Print if c is uppercase character
 * @c: int
 *
 * Return: 1 in case of succes or 0
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}
