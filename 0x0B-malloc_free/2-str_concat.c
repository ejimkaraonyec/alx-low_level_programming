#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two string
 *
 * @s1: first string pointer
 * @s2: second string pointer
 *
 * Return: pointer to new string, NULL if it fails
 */

char *str_concat(char *s1, char *s2)
{
	int s1len, s2len, len, i;
	char *arr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (s1len = 0; *(s1 + s1len) != '\0'; s1len++)
		;
	for (s2len = 0; *(s2 + s2len) != '\0'; s2len++)
		;

	len = s1len + s2len;

	arr = (char *) malloc(len * sizeof(char) + 1);

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < s1len; i++)
		*(arr + i) = *(s1 + i);
	for (i = 0; i < s2len; i++)
		*(arr + i + s1len) = *(s2 + i);

	return (arr);
}
