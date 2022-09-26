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
	unsigned int bytes = 0;

	for (; *s; s++)
	{
		for (; *accept; accept++)
		{
			if (*s == *accept)
			{
				bytes++;
				break;
			}

			else if (*(accept + 1) == '\0')
				return (bytes);
		}
	}

	return (bytes);
}
