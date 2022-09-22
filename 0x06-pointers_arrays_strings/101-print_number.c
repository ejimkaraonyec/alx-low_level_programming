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
	unsigned int i, j = 1;

	if (n < 0)
	{
		_putchar('-');
		n -= n;
	}
	i =  (unsigned int)n;

	while (i / j > 9)
		j *= 10;
	while (j)
	{
		_putchar('0' + i / j);
		i %= j;
		j /= 10;
	}
}
