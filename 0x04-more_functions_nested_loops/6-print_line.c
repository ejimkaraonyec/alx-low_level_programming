#include "main.h.h"

/**
 * print_line - prints a line of _
 * @n: given length
 *
 * Return: void
 */

void print_line(int n)
{
	int i = 0;

	while (i < n)
	{
		_putchar('_');
		i++;
	}
	_putchar('\n');
}
