#include "main.h"

/**
 * times_table - print times table
 *
 * Return: void
 */

void times_table(void)
{
	int hor;
	int vet;
	int prod;
	int tens;
	int ones;

	hor = 0;
	while (hor <= 9)
	{
		for (vet = 0; vet <= 9; vet++)
		{
			prod = hor * vet;
			tens = prod / 10;
			ones = prod % 10;

			if (vet == 0)
				_putchar(48);
			else if (prod < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(ones + 48);
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(tens + 48);
				_putchar(ones + 48);
			}
		}
		hor++;
		_putchar(10);
	}
}
