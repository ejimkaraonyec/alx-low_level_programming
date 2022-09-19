#include "main.h"

/**
 * puts2 - print every other
 *
 * @str: pointer string
 *
 * Return: void
 */

void puts2(char *str)
{
	int loc;

	for (loc = 0; str[loc] != '\0'; loc++)
	{
		if (loc % 2 == 0)
			_putchar(str[loc]);
	}
	_putchar(10);
}
