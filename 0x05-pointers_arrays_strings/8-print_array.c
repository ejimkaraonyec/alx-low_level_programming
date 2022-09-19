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

	last = n - 1;
	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (n < last)
			printf(", ");
	}
	printf("\n");
}
