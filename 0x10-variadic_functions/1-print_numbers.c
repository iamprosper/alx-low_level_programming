#include "variadic_functions.h"
/**
 * print_numbers - A function that prints numbers given as parameter
 * @separator: A String acting like separator
 * @n: The total number
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	if (separator != NULL)
	{
		va_list va;
		unsigned int i;

		va_start(va, n);

		for (i = 0; i < n; i++)
		{
			if (i + 1 != n)
				printf("%d%s", va_arg(va, const unsigned int), separator);
			else
				printf("%d\n", va_arg(va, const unsigned int));
		}
		va_end(va);
	}
}
