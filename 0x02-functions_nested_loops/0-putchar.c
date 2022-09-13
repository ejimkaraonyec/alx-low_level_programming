#include "main.h"

/**
 * main - Entry point
 *
 * Description: print _putchar using putchar function
 * from main.h
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char t[8] = "_putchar";
	int i;

	i = 0;
	while (i < 8)
	{
		_putchar(t[i]);
		i++;
	}
	_putchar(10);

	return (0);
}
