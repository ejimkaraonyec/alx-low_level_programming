#include <stdio.h>

/**
 * main - print double digit combos
 *
 * Description: print combinations of two
 * digits
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;
	int j;

	i = 48;
	j = 48;

	while (i < 58)
	{
		for (j = i + 1; j < 58; j++)
		{
			putchar(i);
			putchar(j);
			if (i < 56 || j < 57)
			{
				putchar(44);
				putchar(32);
			}
		}
		i++;
	}

	putchar(10);

	return (0);
}
