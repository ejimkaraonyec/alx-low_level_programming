#include "main.h"

/**
 * *_strncat - concatenate src to dest
 *
 * @dest: destination array
 * @src: source array
 * @n: the number of characters from src
 *
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i]; i)
		;
	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;
	}
	dest[i] = '\0';

	return (dest);
}
