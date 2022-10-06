#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 *
 * @s1: first string pointer
 * @s2: second string pointer
 * @n: number of bytes of s2 to concatenate to s1
 *
 * Return: pointer to allocated memory corresponding with the string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int s1len, s2len, len, i;
	char *arr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (s1len = 0; *(s1 + s1len) != '\0'; s1len++)
		;
	for (s2len = 0; *(s2 + s2len) != '\0'; s2len++)
		;

	if (n >= s2len)
		len = s1len + s2len;
	else
	{
		len = s1len + n;
		s2len = n;
	}

	arr = malloc(sizeof(*arr) * len + 1);
	if (arr == NULL)
		return (NULL);

	for (i = 0; i < s1len; i++)
		*(arr + i) = *(s1 + i);
	for (i = 0; i < s2len; i++)
		*(arr + i + s1len) = *(s2 + i);
	*(arr + i + s1len) = '\0';

	return (arr);
}
