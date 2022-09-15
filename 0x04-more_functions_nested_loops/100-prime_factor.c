#include <stdio.h>

/**
 * main - entry point
 *
 * Description: the program finds and prints the
 * largest prime factor of the number 612852475143
 *
 * Return: Always 0
 */

int main(void)
{
	long quot = 612852475143;
	long div = 2;

	while (quot != div)
	{
		if (quot % div == 0)
			quot = quot / div;
		else
			div++;
	}

	printf("%li\n", quot);

	return (0);
}
