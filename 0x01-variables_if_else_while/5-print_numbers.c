#include <stdio.h>

/**
 * main - entry point
 *
 * Description: print from 0 to 9
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int i = 0;

	for (i = 0; i < 10; i++)
	{
		printf("%d", i);
	}

	putchar('\n');

	return (0);
}
