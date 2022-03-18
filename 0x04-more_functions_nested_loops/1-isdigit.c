#include "main.h"
/**
 * _isdigit - check digits number
 * @c: int
 *
 * Return: 1 in case of succes, 0 in case of failure.
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}
