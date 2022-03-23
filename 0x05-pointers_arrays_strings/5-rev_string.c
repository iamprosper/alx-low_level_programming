#include "main.h"
/**
 * rev_string - Reverse a string
 * @s: Pointer to char
 *
 */
void rev_string(char *s)
{
	int len = 0;
	int i = 0;
	char ch;

	while (s[len] != '\0')
		len++;

	while (i < len / 2)
	{
		ch = s[len - 1 - i];
		s[len - 1 - i] = s[i];
		s[i] = ch;
		/*s[len - 1] = sth;*/
		i++;
		/*len--;*/
	}
}
