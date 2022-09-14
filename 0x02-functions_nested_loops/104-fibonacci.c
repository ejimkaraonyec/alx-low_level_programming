#include <stdio.h>

/**
 * main - prints Fibonacci numbers
 *
 * Description: print the first 98 Fibonacci numbers
 * starting with 1 and 2 and end with a new line
 *
 * Return: Always 0.
 */

int main(void)
{
	unsigned long sum, first, second;
	int count;

	sum = 0;
	first = 0;
	second = 1;

	for (count = 0; count < 97; count++)
	{
		sum = first + second;
		printf("%lu, ", sum);
		first = second;
		second = sum;
	}
	sum = first + second;
	printf("%lu\n", sum);

	return (0);
}
