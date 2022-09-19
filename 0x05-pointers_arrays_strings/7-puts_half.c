#include "main.h"

/**
 * puts_half - prints half
 *
 * @str: pointer string
 *
 * Return: void
 */

void puts_half(char *str)
{
	int loc, half, len;

	for (loc = 0; str[loc] != '\0'; loc++)
		;
	len = loc;
	half = len / 2;
	while (half <= len)
	{
		_putchar(str[half]);
		half++;
	}
	_putchar(10);
}
