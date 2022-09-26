#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 *
 * @s: pointer to the string scanned
 * @accept: list of characters to match
 *
 * Return: The number of bytes in s which
 *         consist only of bytes from accept.
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int prev, bytes = 0;
	int i, j;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		prev = bytes;
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*(s + i) == *(accept + j))
				bytes++;
		}
		if (prev == bytes))
			break;
	}

	return (bytes);
}
