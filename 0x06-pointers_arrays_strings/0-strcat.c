#include "main.h"

/**
 * *_strcat - concatenate src to dest
 *
 * @dest: destination array
 * @src: source array
 *
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0; dest[i]; i++)
		dest[i] = dest[i];
	dest[i] = ' ';
	for (j = 0; src[j]; j++)
	{
		dest[i] = src[j];
		i++;
	}
	dest[i] = '\0';

	return (dest);
}
