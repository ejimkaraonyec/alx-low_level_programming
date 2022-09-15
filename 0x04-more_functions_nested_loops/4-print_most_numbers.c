#include "main.h"

/**
 * print_most_numbers - prints from 0 to 9
 *
 * Return: Always 0
 */

void print_most_numbers(void)
{
	int min, max;

	min = 48;
	max = 57;
	while (min <= max)
	{
		if (min != 2 && min != 4)
			_putchar(min);
		min++;
	}
	_putchar(10);
}
