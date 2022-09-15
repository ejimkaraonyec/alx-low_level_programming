#include "main.h"

/**
 * more_numbers - print 10 lines of 0 to 14
 *
 * Return: void
 */

void more_numbers(void)
{
	int lines, i, j, tens;

	for (lines = 0; lines < 10; lines++)
	{
		i = 48;
		tens = 48;
		for (j = 0; j < 14; j++)
		{
			if (j <= 9)
			{
				_putchar(i);
				i++;
			}
			else
			{
				_putchar(49);
				_putchar(tens);
				tens++;
			}
		}
		_putchar(10);
	}
}
