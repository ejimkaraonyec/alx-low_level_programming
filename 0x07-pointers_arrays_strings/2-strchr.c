#include "main.h"
#define NULL 0 /* a constant returned where char c is not found */

/**
 * _strchr - locates a character in a string
 *
 * @s: pointer to the searched string
 * @c: character searched
 *
 * Return: pointer to c or NULL
 */

char *_strchr(char *s, char c)
{
	int i;

	if (c == '\0')
		return (s);

	for (i = 0; *(s + i) != '\0'; i++)
	{
		if (*(s + i) == c)
			return (s + i);

	}

	return (NULL);
}
