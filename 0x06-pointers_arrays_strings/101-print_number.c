#include "main.h"

/**
 * print_number - print an integer
 *
 * @n: integer
 *
 * Return: void
 */

void print_number(int n)
{
	unsigned int c;

	if (n < 0)
	{
		_putchar('-');
		c = -n;
	}
	else
		c = n;

	if (c / 10)
		print_number(c / 10);

	_putchar(c % 10 + '0');
}
