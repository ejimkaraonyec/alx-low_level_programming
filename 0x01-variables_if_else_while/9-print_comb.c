#include <stdio.h>

/**
 * main - print single digit numbers
 *
 * Description: print from 0 to 9 separated
 * by comma and whitespace  using putchar
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
		if (i != 57)
		{
			putchar(44);
			putchar(32);
		}
	}

	putchar(10);

	return (0);
}
