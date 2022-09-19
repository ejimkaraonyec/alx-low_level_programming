#include "main.h"
#include <stdio.h>

/**
 * print_array - prints elements separated by comma
 *
 * @a: pointer name of array
 * @n: length of array
 *
 * Return: void
 */

void print_array(int *a, int n)
{
	int i, last;

	if (n == 1)
		printf("%d\n", *(a + 0));
	else
	{
		last = n - 1;
		i = 0;
		for (; i < last; i++)
			printf("%d, ", *(a + i));
		printf("%d\n", *(a + i));
	}
}
