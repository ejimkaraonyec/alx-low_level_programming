#include <stdio.h>

/**
 * main - prints Fibonacci numbers
 *
 * Description: print the first 50 Fibonacci numbers
 * starting with 1 and 2 and end with a new line
 *
 * Return: Always 0.
 */

int main(void)
{
	long int sum, first, second;
	int count;

	sum = 0;
	first = 0;
	second = 1;

	for (count = 0; count < 49 count++)
	{
		sum = first + second;
		printf("%li, ", sum);
		first = second;
		second = sum;
	}
	sum = first + second;
	printf("%li\n", sum);

	return (0);
}
