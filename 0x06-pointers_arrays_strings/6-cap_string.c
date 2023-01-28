#include "main.h"

/**
 * converter - Caps converter
 * @i: the char value
 * @c: A pointer to the char
 *
 */
void converter(char *c, int i)
{
	if (c[i + 1] >= 97 && c[i + 1] <= 122)
	{
		c[i + 1] = c[i + 1] - 32;

	}
	else if (c[i + 1] == '\n' && (c[i + 2] != '\0'))
	{
		if (c[i + 2] >= 97 && c[i + 2] <= 122)
			c[i + 2] = c[i + 2] - 32;
	}


}

/**
 * cap_string - Change all starting word to uppercase
 * @c: Pointer to char
 *
 * Return: A pointer to char
 */
char *cap_string(char *c)
{
	int i;

	for (i = 0; c[i] != '\0'; i++)
	{
		/* Checking if the current character is a separator*/
		if ((c[i] >= 32 && c[i] <= 34) ||
			(c[i] == 40) ||
			(c[i] == 41) ||
			(c[i] == 44) ||
			(c[i] == 46) ||
			(c[i] == 63) ||
			(c[i] == 123) ||
			(c[i] == 125) ||
			(c[i] == 9))
		{
			/*Checking if the following character is a lowercase character*/
			if (c[i + 1] != '\0')
			{
				converter(c, i);
			}

			if (c[i] == 9)
				c[i] = ' ';
		}
		else if (i == 0)
			converter(c, -1);
	}
	/*_putchar('\n');*/
	return (c);
}
