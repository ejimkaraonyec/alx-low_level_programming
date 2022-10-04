#include "main.h"
#include <stdlib.h>

/**
 * *create_array - creates an array of chars and
 *                 intitializes it with specific char
 *
 * @size: size of chars
 * @c: character
 *
 * Return: NULL if it fails, else return a  pointer to the array
 */

char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)
		return (NULL);
	arr = (char *) malloc(sizeof(char) * size);
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		*(arr + i) = c;
	return (arr);
}
