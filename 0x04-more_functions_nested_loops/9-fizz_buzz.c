#include <stdio.h>

/**
 * main - entry point
 *
 * Description: this is the popular fizzbuzz challange
 *
 * Return: 0
 */

int main(void)
{
	int n;

	for (n = 1; n <= 100; n++)
	{
		if (n % 5 == 0 && n % 3 == 0)
			printf("FizzBuzz ");
		else if (n % 5 == 0)
			if (n < 100)
				printf("Buzz ");
		printf("Buzz");
		else if (n % 3 == 0)
			printf("Fizz ");
		else
			printf("%d ", n);
	}
	printf("\n");

	return (0);
}
