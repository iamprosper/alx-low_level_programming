#include "main.h"
/**
 * rot13 - Use rot13 algorithm to replace every characters by the 13th
 * @c: Pointer to the char
 *
 * Return: A pointer to the char
 */
char *rot13(char *c)
{
	int i = 0;
	int j = 0;
	char first[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char other[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	while (c[i] != '\0')
	{
		j = 0;
		while (first[j] != '\0')
		{
			if (c[i] == first[j])
			{
				c[i] = other[j];
				break;
			}
			j++;
		}
		i++;
	}
	return (c);
}
