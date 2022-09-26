#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Prints the sum of the two diagonals
 *
 * @a: The matrix of integers
 * @size: The size of the array
 *
 * Return: void, nada
 */

void print_diagsums(int *a, int size)
{
	int loc, sumx = sumy = 0;

	for (loc = 0; loc < size; loc++)
	{
		sumx += *(a + loc);
		a += size;
	}

	a -= size;

	for (loc = 0; loc < size; loc++)
	{
		sumy += *(a + loc);
		a -= size;
	}

	printf("%d, %d\n", sumx, sumy);
}
