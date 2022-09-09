#include <stdio.h>

/**
 * main - entry point
 *
 * Description: print alphabets in reverse
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	char ch = 'z';

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}

	putchar('\n');

	return (0);
}
