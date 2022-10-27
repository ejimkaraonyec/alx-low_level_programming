#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: number
 */

void print_binary(unsigned long int n)
{
	char b_rep;

	if (n == 0 || n == 1)
	{
		_putchar(n);
		return;
	}
	print_binary(n >> 1);
	b_rep = (n & 1) ? '1' : '0';
	_putchar(b_rep);
}
