#include <stdio.h>

/**
 * main - entry point
 *
 * Description: print lowercase alphabets
 * follewdd by uppercase alphabets
 * using putchar
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	char ch_a = 'a';
	char ch_A = 'A';

	for (ch_a = 'a'; ch_a <= 'z'; ch_a++)
	{
		putchar(ch_a);
	}

	for (ch_A = 'A'; ch_A <= 'Z'; ch_A++)
	{
		putchar(ch_A);
	}

	putchar('\n');

	return (0);
}
