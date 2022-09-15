#include "main.h"

/**
 * print_most_numbers - prints from 0 to 9
 *
 * Return: Always 0
 */

void print_most_numbers(void)
{
	int i;

	i = 0;
	while (i < 10)
	{
		if (i != 2 && i != 4)
			_putchar (i);
		i++;
	}
	_putchar (10);
}
