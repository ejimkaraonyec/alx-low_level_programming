#include <stdio.h>

/**
 * main - print double digit combos
 *
 * Description: print combinations of three
 * digits
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;
	int j;
	int k;

	i = 48;
	j = 48;
	k = 48;

	while (i < 58)
	{
		for (j = i + 1; j < 58; j++)
		{
			for (k = j + 1; k < 58; k++)
			{
				putchar(i);
				putchar(j);
				putchar(k);
				if (i < 55 || j < 56 || k < 57)
				{
					putchar(44);
					putchar(32);
				}
			}
		}
		i++;
	}

	putchar(10);

	return (0);
}
