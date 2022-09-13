#include "main.h"

/**
 * print_last_digit - print last digit
 *
 * @n: an integer
 *
 * Return: integer
 */

int print_last_digit(int n)
{
	int l;

	l = n % 10;
	_putchar(l);

	return (l);
}
