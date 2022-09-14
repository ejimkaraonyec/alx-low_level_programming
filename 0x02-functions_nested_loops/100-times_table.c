#include "main.h"

/**
 * print_times_table - print times table
 *
 * @n: integer parameter
 * Return: void
 */

void print_times_table(int n)
{
	int hor, vet, prod;

	if (n < 15 || n >= 0)
	{
		for (hor = 0; hor <= n; hor++)
		{
			for (vet = 0; vet <= n; vet++)
			{
				prod = hor * vet;

				if (vet == 0)
					_putchar(48);
				else if (prod < 10)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(prod % 10 + 48);
				}
				else if (prod >= 10 && prod < 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar((prod / 10) % 10 + 48);
					_putchar(prod % 10 + 48);
				}
				else if (prod > 99 && prod < 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(prod / 100 + 48);
					_putchar((prod / 10) % 10 + 48);
					_putchar(prod % 10 + 48);
				}
			}
			_putchar(10);
		}
	}
}
