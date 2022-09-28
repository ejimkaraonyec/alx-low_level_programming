#include "main.h"

/**
 * _strlenrec - calculate length of string
 *
 * @s: string pointer
 *
 * Return: void
 */

int _strlenrec(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlenrec(s + 1));
}

/**
 * _print_rev_recursion - prints a string in reverse
 *
 * @s: string pointer
 *
 * Return: void
 */

void _print_rev_recursion(char *s)
{
	int len;

	len = _strlenrec(s);
	if (len == 1)
		_putchar(*s);
	_putchar(*(s + len));
	_print_rev_recursion(s - 1);
}
