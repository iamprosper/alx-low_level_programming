#include "main.h"
/**
 * jack_bauer - Prints hours from "00:00 to 23:59"
 */

void jack_bauer(void)
{
	int hour;
	int min;
	int trail_hour;
	int trail_min;

	for (hour = 0; hour <= 2; hour++)
	{
		for (trail_hour = 0; trail_hour <= 9 ; trail_hour++)
		{
			for (min = 0; min < 6; min++)
			{
				for (trail_min = 0; trail_min <= 9; trail_min++)
				{
					_putchar(hour + '0');
					_putchar(trail_hour + '0');
					_putchar(':');
					_putchar(min + '0');
					_putchar(trail_min + '0');
					_putchar('\n');
				}
			}
			if (hour == 2 && trail_hour == 3)
				break;
		}
	}

}
