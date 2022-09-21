#include "main.h"

/**
 * leet - encode a string into 1337
 *
 * @s: pointer to character string array
 *
 * Return: the result
 */

char *leet(char *s)
{
	int i, j;
	char leet[8] = {'O', 'L', '?', 'E', 'A', '?', '?', 'T'};

	for (i = 0; s[i]; i++)
	{
		for (j = 0; j <= 7; j++)
		{
			if (s[i] == leet[j] || s[i] - 32 == leet[j])
				s[i] = j + '0';
		}
	}

	return (s);
}
