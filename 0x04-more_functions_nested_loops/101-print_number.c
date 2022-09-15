#include "main.h"

/**
* print_number - print an integer number
*
* @n: given number to be printed
*
*/

void print_number(int n)
{
	unsigned int num;

	num = n;
	if (n < 0)
	{
		_putchar(45);
		num = -num;
	}
	if (num > 9)
		print_number(num / 10);
	_putchar(num % 10 + 48);
}
