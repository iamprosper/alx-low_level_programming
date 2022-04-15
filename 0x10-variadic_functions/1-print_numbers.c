#include "variadic_functions.h"
/**
 * print_numbers - A function that prints numbers given as parameter
 * @separator: A String acting like separator
 * @n: The total number
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	if (separator != NULL && n > 0)
	{
		va_list va;
		unsigned int i;
		int  *value = malloc(sizeof(int));

		va_start(va, n);

		for (i = 0; i < n; i++)
		{
			*value = va_arg(va, int);
			if (value != NULL)
			{
				if (i + 1 != n)
					printf("%d%s", *value, separator);
				else
					printf("%d\n", *value);
			}
		}
		va_end(va);
	}
}
