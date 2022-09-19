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
	int i;

	for (i = 0; i < (n - 1); i++)
	{
		printf("%d, ", a[i]);
		i++;
	}
	printf("%d\n", a[i]);
}
