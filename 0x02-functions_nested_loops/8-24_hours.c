#include "main.h"

/**
 * jack_bauer - prints every minute from 00:00 to 23:59
 *
 * Description: print every minute in a day
 * just like 24
 *
 * Return: void
 */

void jack_bauer(void)
{
	int hours, hr, minutes, min, count_max;

	count_max = '9';
	hours = '0';
	while (hours <= '2')
	{
		if (hours == '2')
		{
			count_max = '3';
		}
		for (hr = '0'; hr <= count_max; hr++)
		{
			for (minutes = '0'; minutes <= '5'; minutes++)
			{
				for (min = '0'; min <= '9'; min++)
				{
					_putchar(hours);
					_putchar(hr);
					_putchar(':');
					_putchar(minutes);
					_putchar(min);
					_putchar(10);
				}
			}
		}
		hours++;
	}
}
