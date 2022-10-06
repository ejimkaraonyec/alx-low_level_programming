#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array
 *
 * @nmemb: number of members
 * @size: number of bytes
 *
 * Return: pointer to allocated memory corresponding with the string
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *arr;
	char *j;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	arr = malloc(size * nmemb);

	if (arr == NULL)
		return (NULL);

	j = arr;

	for (i = 0; i < (size * nmemb); i++)
		j[i] = '\0';

	return (arr);
}
