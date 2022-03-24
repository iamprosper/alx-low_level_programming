#include "main.h"
/**
 * leet - String encoding
 * @c: Pointer to char
 *
 * Return: A pointer to char
 */
char *leet(char *c)
{
	int i = 0;
	int j;

	char letters[] = "aeotl";
	char numbers[] = "43071";

	while (c[i] != '\0')
	{
		j = 0;
		while (letters[j] != '\0')
		{
			if ((c[i] == letters[j]) || (c[i] == letters[j] - 32))
				c[i] = numbers[j];
			j++;
		}
		/*
		 * if (c[i] == 97 || c[i] == 65)
		*	c[i] = 52;
		*else if (c[i] == 101 || c[i] == 69)
		*	c[i] = 51;
		*else if (c[i] == 111 || c[i] == 79)
		*	c[i] = 48;
		*else if (c[i] == 116 || c[i] == 84)
		*	c[i] = 55;
		*else if (c[i] == 108 || c[i] == 76)
		*	c[i] = 49;
		*/
		i++;
	}

	return (c);
}
