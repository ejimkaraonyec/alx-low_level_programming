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
	int loc, len;

	for (loc = 0; str[loc] != '\0'; loc++)
		;
	if (loc % 2 == 1)
		len = loc / 2;
	else
		len = (loc - 1) / 2;

	for (len++; len < loc; len++)
		_putchar(str[len]);

	_putchar(10);
}
