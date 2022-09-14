#include <stdio.h>

/**
 * main - prints Fibonacci numbers
 *
 * Description: print the sum of all Fibonacci numbers
 * below 4,000,000
 *
 * Return: Always 0.
 */

int main(void)
{
	long int sum, first, second, count;

	sum = 0;
	first = 0;
	second = 1;

	for (count = 0; count < 4000000; count++)
	{
		count = first + second;
		if (count % 2 == 0)
			sum += count;
		first = second;
		second = sum;
	}

	printf("%li\n", sum);

	return (0);
}
