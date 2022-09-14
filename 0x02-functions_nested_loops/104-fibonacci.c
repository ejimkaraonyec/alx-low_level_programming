#include <stdio.h>
#define LARGEST 10000000000

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
	unsigned long int s_first, s_second, first, second;
	unsigned long int ones, tens, huns;
	int count;

	s_first = 1;
	s_second = 2;
	first = 0;
	second = 1;

	printf("%lu, %lu, ", s_first, s_second);
	for (count = 2; count < 98; count++)
	{
		if (s_first + s_second > LARGEST || first > 0 || second > 0)
		{
			ones = (s_first + s_second) / LARGEST;
			tens = (s_first + s_second) % LARGEST;
			huns = first + second + ones;
			first = second, second = huns;
			s_first = s_second, s_second = tens;
			printf("%lu%010lu", second, s_second);
		}
		else
		{
			tens = s_first + s_second;
			s_first = s_second, s_second = tns;
			printf("%lu", s_seconds);
		}
		if (count != 97)
			printf(", ");
	}
	printf("\n");

	return (0);
}
