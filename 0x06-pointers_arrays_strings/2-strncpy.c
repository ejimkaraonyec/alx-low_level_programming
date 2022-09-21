#include "main.h"

/**
 * *_strncpy - copy src to dest
 *
 * @dest: destination array
 * @src: source array
 * @n: the number of characters from src
 *
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	dest[i] = src[i];

	return (dest);
}
