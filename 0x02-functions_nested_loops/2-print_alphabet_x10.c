#include "main.h"

/**
 * print_alphabet_x10 - print alphabets
 *
 * Description: print 10 lines of all english
 * alphabets in lower case
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	int a;
	int i;

	i = 0;
	while (i < 10)
	{
		a = 97;
		while (a <= 122)
		{
			_putchar(a);
			a++;
		}
		_putchar(10);
		i++;
	}
}
