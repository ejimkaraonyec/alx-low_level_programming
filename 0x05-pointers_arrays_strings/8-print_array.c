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

	i = 0;
	if (n < 0)
		n = 0;
	if (n > 0)
	{
		while (a[i] != '\0' && i < (n - 1))
		{
			printf("%d, ", a[i]);
			i++;
		}
		printf("%d\n", a[i]);
	}
}
