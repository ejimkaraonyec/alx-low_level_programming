#include "main.h"

/**
 * print_rev - print a string in reverse
 *
 * @s: string pointer variable to be printed
 *
 * Return: void
 */

void print_rev(char *s)
{
	int loc;

	loc =0;
	while (s[loc] != '\0')
	{
		loc++;
	}

	while (s[loc] >= 0)
	{
		_putchar(s[loc]);
		loc--;
	}
	_putchar(10);
}
