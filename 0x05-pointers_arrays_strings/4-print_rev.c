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

	for (loc = 0; loc != '\0'; loc++)
		;

	while (str[loc] <= 0)
	{
		_putchar(str[loc]);
		loc--;
	}
	_putchar(10);
}
