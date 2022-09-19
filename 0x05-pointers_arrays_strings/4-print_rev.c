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

	for (loc = 0; s[loc] != '\0'; loc++)
		;

	loc--;
	while (loc >= 0)
	{
		_putchar(s[loc]);
		loc--;
	}
	_putchar(10);
}
