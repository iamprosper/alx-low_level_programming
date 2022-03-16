#include "main.h"
/**
 * times_table - Printing 9 times table starting with 0
 */
void times_table(void)
{
	int i;
	int j;
	int result;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			result = i * j;
			if ( result > 9)
			{
				_putchar(' ');
				_putchar(result / 10 + '0');
				_putchar(result % 10 + '0');
			}
			else
			{
				if ( j == 0 && result == 0)
					_putchar(result + '0');
				else
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(result + '0');
				}
			}
			if ( j != 9 )
				_putchar(',');
			else
				_putchar('\n');
		}
	}
}
