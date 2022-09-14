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
	int count;
	unsigned long first = 0, second = 1, sum;
	unsigned long fib1_half1, fib1_half2, fib2_half1, fib2_half2;
	unsigned long half1, half2;

	for (count = 0; count < 92; count++)
	{
		sum = first + second;
		printf("%lu, ", sum);

		first = second;
		second = sum;
	}

	fib1_half1 = first / 10000000000;
	fib2_half1 = second / 10000000000;
	fib1_half2 = first / 10000000000;
	fib2_half2 = second / 10000000000;

	for (count = 93; count < 99; count++)
	{
		half1 = fib1_half1 + fib2_half1;
		half2 = fib1_half2 + fib2_half2;
		if (fib1_half2 + fib2_half2 > 9999999999)
		{
			half1 += 1;
			half2 %= 10000000000;
		}

		printf("%lu%lu", half1, half2);
		if (i != 98)
			printf(", ");

		fib1_half1 = fib2_half1;
		fib1_half2 = fib2_half2;
		fib2_half1 = half1;
		fib2_half2 = half2;
	}
	printf("\n");
	return (0);
}
