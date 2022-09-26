#include "main.h"
#define NULL 0 /* a constant returned where the byte isn't found */

/**
 * _strpbrk - searches a string for any of a set of bytes
 *
 * @s: pointer to the string scanned
 * @accept: character searched
 *
 * Return: pointer to the matched
 *         or NULL if no match
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*(s + i) == *(accept + j))
				return (s + i);
		}
	}

	return (NULL);
}
