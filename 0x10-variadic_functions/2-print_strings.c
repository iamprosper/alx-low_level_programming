#include "variadic_functions.h"
/**
 * print_strings - A function that prints strings
 * @separator: A pointer to the strings
 * @n: Unsigned int, the number of elements
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	if (separator != NULL && n > 0)
	{
		va_list va;
		unsigned int i, j;
		char **strings;
		char *string;

		strings = malloc(sizeof(char *) * n);

		va_start(va, n);
		for (i = 0; i < n; i++)
		{
			string = va_arg(va, char *);
			if (string != NULL)
			{
				*(strings + i) = string;
			}
			else
			{
				printf("(nil)");
				break;
			}
		}
		for (j = 0; j < i; j++)
		{
			if (j + 1 < i)
				printf("%s%s", strings[j], separator);
			else
				printf("%s\n", strings[j]);
		}
	}
}
