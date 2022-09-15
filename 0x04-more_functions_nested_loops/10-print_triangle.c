#include "main.h"

/**
 * print_triangle - prints a triangle
 *
 * @size: give size
 *
 * Return: void
 */

void print_triangle(int size)
{
	int line;
	int space;
	int pound;

	if (size > 0)
	{
		for (line = 0; line < size; line++)
		{
			for (space = size - 1; space > line; space--)
				_putchar(32);
			for (pound = 0; pound < line + 1; pound++)
				_putchar(35);
			_putchar(10);
		}
	}
	else
		_putchar(10);
}
