#include "main.h"

/**
 * print_square - draws square
 *
 * @size: size of the square
 *
 * Return: void
 */

void print_square(int size)
{
	int length;
	int width;

	if (size > 0)
	{
		for (length = 0; length < size; length++)
		{
			for (width = 0; width < size; width++)
				_putchar(35);
			_putchar(10);
		}
	}
	else
		_putchar(10);
}
