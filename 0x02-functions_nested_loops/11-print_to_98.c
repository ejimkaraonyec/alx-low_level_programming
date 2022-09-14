#include "main.h"

/**
 * print_to_98 - prints numbers to 98
 *
 * @n: integer parameter
 *
 * Return: void
 */

void print_to_98(int n)
{
	if (n < 98)
	{
		while (n < 98)
		{
			_putchar(n);
			_putchar(44);
			_putchar(32);
			n++;
		}
	}
	else if (n > 98)
	{
		while (n > 98)
		{
			_putchar(n);
			_putchar(44);
			_putchar(32);
			n--;
		}
	}
	_putchar('98');
	_putchar(10);
}
