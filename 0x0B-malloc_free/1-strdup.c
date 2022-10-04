#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 *
 * @str: string
 *
 * Return: pointer to newly allocated space in memory
 */

char *_strdup(char *str)
{
	int len, i;
	char *arr;

	if (str == NULL)
		return (NULL);

	for (len = 0; *(str + len) != '\0'; len++)
		;
	arr = (char *) malloc(len * sizeof(char) + 1);
	if (arr == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
		*(arr + i) = *(str + i);
	*(arr + i) = '\0';

	return (arr);
}
