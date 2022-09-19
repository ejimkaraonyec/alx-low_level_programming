#include "main.h"

/**
 * _puts - print a string
 *
 * @str: string pointer variable to be printed
 *
 * Return: void
 */

void _puts(char *str)
{
	int loc;

	loc = 0;
	while (str[loc] != '\0')
	{
		_putchar(str[loc]);
		loc++;
	}
	_putchar(10);
}
